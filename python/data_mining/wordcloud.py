import matplotlib.pyplot as plt
from wordcloud import WordCloud

def draw_word_cloud(text_corpus):
    word_cloud = WordCloud(
        collocations = False, background_color = 'white'
    ).generate(text_corpus)
    plt.imshow(word_cloud, interpolation='bilinear')
    plt.axis("off");