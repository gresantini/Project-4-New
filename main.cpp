<html>
<head>
<title>main.cpp</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<style type="text/css">
.s0 { color: #b3ae60;}
.s1 { color: #bcbec4;}
.s2 { color: #6aab73;}
.s3 { color: #7a7e85;}
.s4 { color: #cf8e6d;}
.s5 { color: #bcbec4;}
.s6 { color: #2aacb8;}
</style>
</head>
<body bgcolor="#1e1f22">
<table CELLSPACING=0 CELLPADDING=5 COLS=1 WIDTH="100%" BGCOLOR="#606060" >
<tr><td><center>
<font face="Arial, Helvetica" color="#000000">
main.cpp</font>
</center></td></tr></table>
<pre><span class="s0">#include </span><span class="s2">&lt;iostream&gt;</span>
<span class="s0">#include </span><span class="s2">&lt;string&gt;</span>
<span class="s0">#include </span><span class="s2">&quot;word.h&quot;        </span><span class="s3">// Your Word class header</span>
<span class="s0">#include </span><span class="s2">&quot;gameState.h&quot;   </span><span class="s3">// Your GameState class header</span>
<span class="s0">#include </span><span class="s2">&quot;guessedLetters.h&quot; </span><span class="s3">// Your GuessedLetters class header</span>

<span class="s4">using namespace </span><span class="s1">std</span><span class="s5">; </span><span class="s3">// Added using directive</span>

<span class="s4">int </span><span class="s1">main</span><span class="s5">() {</span>
    <span class="s1">string userWord</span><span class="s5">;</span>

    <span class="s3">// Prompt the user for a word</span>
    <span class="s1">cout </span><span class="s5">&lt;&lt; </span><span class="s2">&quot;Enter a word for the Hangman game: &quot;</span><span class="s5">;</span>
    <span class="s1">cin </span><span class="s5">&gt;&gt; </span><span class="s1">userWord</span><span class="s5">; </span><span class="s3">// Read the user input</span>

    <span class="s3">// Create a Word object with the user's word</span>
    <span class="s1">Word word</span><span class="s5">(</span><span class="s1">userWord</span><span class="s5">);</span>

    <span class="s3">// Initialize other game components</span>
    <span class="s1">GameState gameState</span><span class="s5">;</span>
    <span class="s1">GuessedLetters guessedLetters</span><span class="s5">;</span>

    <span class="s3">// Game loop (simplified)</span>
    <span class="s4">while </span><span class="s5">(!</span><span class="s1">gameState</span><span class="s5">.</span><span class="s1">gameOver</span><span class="s5">() &amp;&amp; !</span><span class="s1">word</span><span class="s5">.</span><span class="s1">solved</span><span class="s5">()) {</span>
        <span class="s3">// Display current game state and guessed letters</span>
        <span class="s1">cout </span><span class="s5">&lt;&lt; </span><span class="s2">&quot;Current word: &quot; </span><span class="s5">&lt;&lt; </span><span class="s1">word</span><span class="s5">.</span><span class="s1">getWord</span><span class="s5">() &lt;&lt; </span><span class="s1">endl</span><span class="s5">;</span>
        <span class="s1">cout </span><span class="s5">&lt;&lt; </span><span class="s2">&quot;Guessed letters: &quot; </span><span class="s5">&lt;&lt; </span><span class="s1">guessedLetters</span><span class="s5">.</span><span class="s1">getLetters</span><span class="s5">() &lt;&lt; </span><span class="s1">endl</span><span class="s5">;</span>

        <span class="s4">char </span><span class="s1">guess</span><span class="s5">;</span>
        <span class="s1">cout </span><span class="s5">&lt;&lt; </span><span class="s2">&quot;Enter a letter to guess: &quot;</span><span class="s5">;</span>
        <span class="s1">cin </span><span class="s5">&gt;&gt; </span><span class="s1">guess</span><span class="s5">; </span><span class="s3">// Read the guessed letter</span>

        <span class="s3">// Add the guessed letter to the guessed letters list</span>
        <span class="s1">guessedLetters</span><span class="s5">.</span><span class="s1">addLetter</span><span class="s5">(</span><span class="s1">guess</span><span class="s5">);</span>

        <span class="s3">// Check if the guessed letter is in the word</span>
        <span class="s4">if </span><span class="s5">(</span><span class="s1">word</span><span class="s5">.</span><span class="s1">findLetter</span><span class="s5">(</span><span class="s1">guess</span><span class="s5">)) {</span>
            <span class="s1">word</span><span class="s5">.</span><span class="s1">addLetter</span><span class="s5">(</span><span class="s1">guess</span><span class="s5">); </span><span class="s3">// Update the current word</span>
            <span class="s1">cout </span><span class="s5">&lt;&lt; </span><span class="s2">&quot;Good guess!&quot; </span><span class="s5">&lt;&lt; </span><span class="s1">endl</span><span class="s5">;</span>
        <span class="s5">} </span><span class="s4">else </span><span class="s5">{</span>
            <span class="s1">gameState</span><span class="s5">.</span><span class="s1">addState</span><span class="s5">(); </span><span class="s3">// Move to the next state (incremental &quot;hanging&quot;)</span>
            <span class="s1">cout </span><span class="s5">&lt;&lt; </span><span class="s2">&quot;Wrong guess! You are now at: &quot; </span><span class="s5">&lt;&lt; </span><span class="s1">gameState</span><span class="s5">.</span><span class="s1">getState</span><span class="s5">() &lt;&lt; </span><span class="s1">endl</span><span class="s5">;</span>
        <span class="s5">}</span>
    <span class="s5">}</span>

    <span class="s3">// Final message</span>
    <span class="s4">if </span><span class="s5">(</span><span class="s1">word</span><span class="s5">.</span><span class="s1">solved</span><span class="s5">()) {</span>
        <span class="s1">cout </span><span class="s5">&lt;&lt; </span><span class="s2">&quot;Congratulations! You've guessed the word: &quot; </span><span class="s5">&lt;&lt; </span><span class="s1">word</span><span class="s5">.</span><span class="s1">getWord</span><span class="s5">() &lt;&lt; </span><span class="s1">endl</span><span class="s5">;</span>
    <span class="s5">} </span><span class="s4">else </span><span class="s5">{</span>
        <span class="s1">cout </span><span class="s5">&lt;&lt; </span><span class="s2">&quot;Game over! The word was: &quot; </span><span class="s5">&lt;&lt; </span><span class="s1">userWord </span><span class="s5">&lt;&lt; </span><span class="s1">endl</span><span class="s5">;</span>
    <span class="s5">}</span>

    <span class="s4">return </span><span class="s6">0</span><span class="s5">;</span>
<span class="s5">}</span>
</pre>
</body>
</html>