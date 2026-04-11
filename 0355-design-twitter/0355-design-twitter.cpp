class Twitter {
public:
    int time = 0;

    // user -> list of {time, tweetId}
    unordered_map<int, vector<pair<int,int>>> tweets;

    // user -> set of followees
    unordered_map<int, unordered_set<int>> follows;

    Twitter() {}

    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {
        vector<pair<int,int>> feed;

        // include own tweets
        for (auto &t : tweets[userId]) {
            feed.push_back(t);
        }

        // include followees' tweets
        for (auto f : follows[userId]) {
            for (auto &t : tweets[f]) {
                feed.push_back(t);
            }
        }

        // sort by time descending
        sort(feed.begin(), feed.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        // take top 10
        vector<int> result;
        for (int i = 0; i < min(10, (int)feed.size()); i++) {
            result.push_back(feed[i].second);
        }

        return result;
    }

    void follow(int followerId, int followeeId) {
        if (followerId != followeeId)
            follows[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        follows[followerId].erase(followeeId);
    }
};