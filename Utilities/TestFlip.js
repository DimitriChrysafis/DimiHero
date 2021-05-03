// ==UserScript==
// @name         Flip A Coin
// @namespace    https://www.dimitri.page
// @version      0.1
// @description  try to take over the world!
// @author       DimiAmaznKid
// @match        *://www.google.com/search?q=flip+a+coin&oq=flip*
// @run-at       document-start
// @grant        none
// ==/UserScript==

var result = 0;

Math.random = function() {
    return result;
}

window.addEventListener("keydown", event => {
    if (event.code == "KeyH") result = 0;
    if (event.code == "KeyT") result = 1;
})
