const filter = {
  urls: [
    '*://facebook.com/*',
    '*://twitter.com/*',
    '*://nicefarts.io/*',
    '*://www.facebook.com/*',
    '*://www.reddit.com/*',
    '*://tmz.com/*',
    '*://abc.com/*',
    '*://youtube.com/*'
    
  ],
};

const opt = ['blocking'];

window.chrome.webRequest.onBeforeRequest.addListener(
  page => {
    console.log('page blocked - ' + page.url);

    return {
      cancel: true,
    };
  },
  filter,
  opt
);
