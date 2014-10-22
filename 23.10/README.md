<b>Задача 1</b>
<p><div class="highlight highlight-c++">
<pre>
<span class="n">int n=</span> <span class="mf">20</span><span class="p">;</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">hex</span> <span class="o">&lt;&lt;</span> <span class="n">showbase</span> <span class="o">&lt;&lt;</span> <span class="n">n</span><span class="p">;</span>  <span class="c1">// -&gt; 0x14</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">hex</span> <span class="o">&lt;&lt;</span> <span class="n">noshowbase</span> <span class="o">&lt;&lt;</span> <span class="n">n</span><span class="p">;</span>  <span class="c1">// -&gt; 14</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">oct</span> <span class="o">&lt;&lt;</span> <span class="n">noshowbase</span> <span class="o">&lt;&lt;</span> <span class="n">n</span><span class="p">;</span>  <span class="c1">// -&gt; 24</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">dec</span> <span class="p">;</span>  <span class="c1">// -&gt; връща извеждането на числата в десетичен формат</span>

<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="mf">10.0</span><span class="p">;</span>               <span class="c1">// -&gt; 10</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">showpoint</span> <span class="o">&lt;&lt;</span> <span class="mi">10</span><span class="p">;</span>    <span class="c1">// -&gt; 10</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">showpoint</span> <span class="o">&lt;&lt;</span> <span class="mf">10.0</span><span class="p">;</span>  <span class="c1">// -&gt; 10.0</span>

<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="mi">9</span><span class="p">;</span>              <span class="c1">// -&gt; 9</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">showpos</span> <span class="o">&lt;&lt;</span> <span class="mi">9</span><span class="p">;</span>   <span class="c1">// -&gt; +9</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="o">-</span><span class="mi">9</span><span class="p">;</span>             <span class="c1">// -&gt; -9</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">showpos</span> <span class="o">&lt;&lt;</span> <span class="o">-</span><span class="mi">9</span><span class="p">;</span>  <span class="c1">// -&gt; -9</span>

<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="mf">9.87654321</span><span class="p">;</span>                <span class="c1">// -&gt; 9.87654</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">fixed</span> <span class="o">&lt;&lt;</span> <span class="mf">9.87654321</span><span class="p">;</span>       <span class="c1">// -&gt; 9.876543</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">scientific</span> <span class="o">&lt;&lt;</span> <span class="mf">98.7654321</span><span class="p">;</span>  <span class="c1">// -&gt; 9.876543e+001</span>

<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">setprecision</span><span class="p">(</span><span class="mi">3</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="mf">9.87654321</span><span class="p">;</span>                <span class="c1">// -&gt; 9.88 изкарва тоя резултат ако изхода е в нормален режим, а в момента той е в режим scientific </span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">setprecision</span><span class="p">(</span><span class="mi">3</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="n">fixed</span> <span class="o">&lt;&lt;</span> <span class="mf">9.87654321</span><span class="p">;</span>       <span class="c1">// -&gt; 9.877</span>
<span class="n">cout</span> <span class="o">&lt;&lt;</span> <span class="n">setprecision</span><span class="p">(</span><span class="mi">3</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="n">scientific</span> <span class="o">&lt;&lt;</span> <span class="mf">98.7654321</span><span class="p">;</span>  <span class="c1">// -&gt; 9.877e+001</span>
</pre></div></p>

<b>Задача 2</b>
<p>Използвайте подходящи манипулатори за да форматирате по същия начин следната таблица :</p>

<a href="http://tinypic.com?ref=o92zcw" target="_blank"><img src="http://i57.tinypic.com/o92zcw.png" border="0" alt="Image and video hosting by TinyPic"></a>
