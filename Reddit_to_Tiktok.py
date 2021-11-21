# install praw (Reddit's API)
pip install --upgrade praw 

import praw

# Create Reddit bot
reddit = praw.Reddit(
    client_id="6-hDjJKIiV5VlvXiL0E-OA",          
    client_secret="LDbu-3NXnCqDc8lcDWEHjtX56acupw",
    password="gottakeepthebeatsupmynigga12",                   
    user_agent="test script by Serious-Item-9417",  
    username="Serious-Item-9417"                  
)

# This avoids a 401 error that'd be raised because we wouldn't be authorised to do what we need to do
reddit.read_only = True

#Subreddits:
# - https://www.reddit.com/r/explainlikeimfive/
# - https://www.reddit.com/r/CrazyIdeas/
# - https://www.reddit.com/r/pettyrevenge/top/?t=all

# Initialises the subreddit we'll take submissions from
subreddit = reddit.subreddit("explainlikeimfive")

# Reads: using our reddit bot, look into the "explainlikeimfive" subreddit and print the title of 10 submissions
for submission in reddit.subreddit("explainlikeimfive").hot(limit=10):
  print(submission.title)
  
  
