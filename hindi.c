#include<stdio.h> 

/* यह C भाषा के मूल शब्द (keywords) है */
#define संख्या  int 
#define अगर if 
#define नहीतो  else
#define अक्षर char
#define स्थिर const
#define भंग break
#define जारी continue
#define दुगना double
#define जाओ goto
#define जबतक while
#define प्रत्येक for
#define रचना struct
#define वापस return
#define चुनो switch
#define जब case
#define करो do
#define अनुपस्थित default
#define रिक्त void

#define लिखो printf
#define मुख्य main
#define पढ़ो scanf

/*
यह प्रोग्राम २ से शुरू करते हुए जहा तक आवश्यकता हो वह तक के पहाड़े टर्मिनल पर प्रिंट करता है. 
इन पहाड़ो को कॉलम्स मैं प्रिंट किया जाता है ताकि पढ़ने मैं आसानी रहे। 
कॉलम्स की संख्या भी बदली जा सकती है। 
*/
संख्या मुख्य() { 

    संख्या कालम = 5;
    संख्या पहाड़े = 20;
    प्रत्येक (संख्या k=2;k<=पहाड़े;k+=कालम) {
        प्रत्येक (संख्या j=0;j<कालम;j++) { 
            लिखो("%d का पहाड़ा\t", k+j);
        }
        लिखो("\n");
        प्रत्येक (संख्या j=0;j<कालम ;j++) {
            लिखो("-----------\t");
        }
        लिखो("\n");
        प्रत्येक (संख्या i=0;i<10;i++) {
            प्रत्येक (संख्या j=0;j<कालम;j++) {
                लिखो("%d * %2d = %d\t", k+j, i+1, (k+j)*(i+1)); 
            }
            लिखो("\n");
        }
        लिखो("\n");
    }

    वापस 0;
}