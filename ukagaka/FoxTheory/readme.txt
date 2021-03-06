◆Ghost Name
　FoxTheory
　
◆Name
　リサ(Lisa)

◆Theme
　"Relentless pursuit of the knowledge"
　内容は理論物理学に関連したトークが中心です。
　そのほかに"知識"をテーマとした機能をいくつか実装しています。




◆機能説明
　1. 論文取得、検索機能
　ゴーストの抱えている本をつつくと、arXiv:hep-thの新着論文のリストを表示します(Updateをクリックすると新着論文を取得します)
　本をつついて表示されるバルーンのSearchで取得した論文をキーワードで検索できます。また、Keywordlistをクリックしてキーワードを登録しておくと、それに関する論文を優先的に表示します。
　どちらも大文字、小文字等の表記ゆれに対応しています。(e.g. Quantumならquantum, QUANTUM, Quantumの3つにマッチします)
　hep-th以外のカテゴリーにもアップデートで対応する予定です。
　
　※軽量版にはDeepLearning機能はついていません。メニューには表示されますが実行は不可能です。
　2. DeepLearning(Word2Vec)
　Distributed Representations of Words and Phrases and their Compositionality[arXiv:1310.4546v1]及びEfficient Estimationof Word Representations in Vector Space[arXiv:1301.3781v3]で提唱されたアルゴリズムを用いて、文章から単語の意味の足し引きを推測する機能を実装しています。
　現状ではWikipedia日本語記事の学習済みデータを用いた解析と、同時に起動していたゴーストが話していた内容から学習する機能及び任意のテキストファイル(文字コードはUTF-8)をゴーストに直接渡して学習する機能を実装しています。
　
　3. 会話機能
　形態素解析(Juman, Mecab)と正規表現を利用した簡単な構文解析による会話モジュールを実装しています。
　これによりある程度文章や単語の意味を理解して反応します。
　(抽象的な言葉には弱く、明確な名詞の方が認識しやすいです)
　
　※封印
　4. 学習機能とマルコフ連鎖による文章生成
　Mecabを用いた形態素解析結果の学習とマルコフ連鎖のアルゴリズムにより文章を生成する機能があります……が、ゴーストとして有用な応用ができなかったため、非表示にしてあります。
　興味のある方はyaya_morphmecab.dicのMarkov_testを実行してください。

◆製作
　Nao

◆動作確認環境
　SSP/2.3.97, OS:windows(64bit)
　(DeepLearningモジュールを実行の際はメモリを500MBは確保して下さい)

◆連絡先
　Twitter
　https://twitter.com/naos__

◆謝辞
　素敵なシェルを描いてくださったゆみるさん、SSP開発者で多くの質問に答えていただいたPonapaltさん、
　そしてフォーラム等で質問に答えていただいた人々に心より感謝を申し上げます。

◆Licence情報
　このゴーストの2次創作はR-18, R-18G問わず全面的に許可します。
　再配布は基本的に不可ですが、何らかの理由でNaoによる配布が不可能になった場合は許可します。
　使用したモジュール(SAORI)についてのライセンス事項は同梱のlicence.txtを参照してください。
　
その他、質問等については上記の連絡先までどうぞ。
