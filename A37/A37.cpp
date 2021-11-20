
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <float.h>
#include <string.h>

struct cylinder_dimensions {
    double radius;
    double height;
};

int divide(int x, int y) {
    return x / y;
}
int multiply(int x, int y) {
    return x * y;
}
int cylinder_volume(struct cylinder_dimensions cydim) {
    return (int)(M_PI * cydim.radius*cydim.radius*cydim.height);
}
void binary_operators() {
    printf("1 x*y, 2 x/y\n");
    printf("3 cylinder volume: x height, y radius\n");
    int choice;
    scanf("%d", &choice);
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    int result;
    if (choice == 1) result = multiply(x, y);
    else if (choice == 2) result = divide(x, y);
    else if (choice == 3) {
        struct cylinder_dimensions dim_input;
        dim_input.radius = y;
        dim_input.height = x;
        result = cylinder_volume(dim_input);
    }
    printf("%d\n", result);

}
void continuous_multiplication() {
    int product, choice = 1;
    for (product = 1; choice != 0; product *= choice != 0 ? choice : 1) {
        printf("Continous input: ");
        scanf("%d", &choice);
    }
    printf("%d\n", product);
}

void continuous_addition() {
    int sum;
    char choice[] = "0";
    for (sum = 0; strcmp(choice, "x"); sum += (strcmp(choice, "x") ? atoi(choice) : 0)) {
        printf("Continous input: ");
        scanf("%s", choice);
    }
    printf("%d\n", sum);
}

double get_max(double x, double y) {
    return x > y ? x : y;
}
double get_min(double x, double y) {
    return x < y ? x : y;
}

void mean() {
    int numbers[5];
    int sum = 0;
    double input;
    double min = DBL_MAX, max = DBL_MIN;
    for (int i = 0; i < 5; i++) {
        printf("num %d: ", i);
        scanf("%lf", &input);
        numbers[i] = input;
        sum += numbers[i];
        min = get_min(min, input);
        max = get_max(max, input);
    }
    printf("mean: int %d, float %f\n", sum / 5, (double)sum / 5);
    printf("min %f\n", min);
    printf("max %f\n", max);
}
void mean_restrictedcount() {
    int num;
    int numbers[100];
    int sum = 0;
    double input;
    double min = DBL_MAX, max = DBL_MIN;
    printf("how many numbers: ");
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++) {
        printf("num %d: ", i);
        scanf("%lf", &input);
        numbers[i] = input;
    }

    for (int i = 0; i < num; i++) {
        sum += numbers[i];
        min = get_min(min, numbers[i]);
        max = get_max(max, numbers[i]);
    }
    
    printf("mean: int %d, float %f\n", sum / num, (double)sum / num);
    printf("min %f\n", min);
    printf("max %f\n", max);
}
void mean_unrestricted() {
    int num;
    int sum = 0;
    double input;
    double min = DBL_MAX, max = DBL_MIN;
    printf("how many numbers: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("num %d: ", i);
        scanf("%lf", &input);
        sum += input;
        min = get_min(min, input);
        max = get_max(max, input);
    }

    printf("mean: int %d, float %f\n", sum / num, (double)sum / num);
    printf("min %f\n", min);
    printf("max %f\n", max);
}
void give_sinus() {
    double param;
    printf("param of sin: ");
    scanf("%lf", &param);
    printf("%f\n", sin(param));
}

void add_num_of_numbers() {
    int num;
    double input, sum = 0;
    printf("how many numbers: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%lf", &input);
        sum += input;

    }
    printf("sum %f\n", sum);
}
void means() {
    int choice;
    printf("1 mean\n");
    printf("2 restricted num of numbers\n");
    printf("3 unrestircted num of numbers\n");
    scanf("%d", &choice);
    if (choice == 1) mean();
    else if (choice == 2) mean_restrictedcount();
    else if (choice == 3) mean_unrestricted();
}
void multiply_by_bitshift() {
    int input;
    printf("number: ");
    scanf("%d", &input);
    printf("%d * 4 = %d\n", input, input << 2);
}

int qs_input(int inputs[]) {
	// Eingabe ähnlich zu Aufgabe 5.8 übernommen

	char choice[] = "0";
	int anzahl = 0;
	for (int i = 0; strcmp(choice, "x"); i++) {
		printf("Continous input: ");
		scanf("%s", choice);
		if (strcmp(choice, "x")) {
			inputs[i] = atoi(choice);
			anzahl++;
		}
	}
	return anzahl;
}

void qs_output(int outputs[], int len_outputs) {
	for (int i = 0; i < len_outputs; i++) {
		printf("%d\t", outputs[i]);
	}
	printf("\n");
}


void qs_sort(int liste[], int len_liste) {
	/*
	Beschreibung von QuickSort aus
	J. Goll und M. Dausmann, C als erste Programmiersprache: mit den Konzepten von C11,
	8., Überarbeitete und Erweiterte Auflage. Wiesbaden: Springer Vieweg, 2014.
	*//*
	(1) Auswahl eines beliebigen Vergleichselements, z. B. des mittleren Elements
des Arrays: Dabei stehen startLinks und startRechts für den äußerst linken bzw.
äußerst rechten Index des Arrays, am Anfang also für 0 und n - 1.*/
	int startLinks = 0;
	int startRechts = len_liste - 1;
	int vergleichselementIndex = (startLinks + startRechts) / 2;
	int elementLinks = 0;
	int elementRechts = len_liste - 1;

	printf("qs_sort:\n");
	qs_output(liste, len_liste);
	printf("vergleichselement index %d wert %d\n", vergleichselementIndex, liste[vergleichselementIndex]);
	system("pause");

	/*
(2) Linkes Teilarray mit kleineren (oder gleichen) und rechtes Teilarray mit
größeren (oder gleichen) Elementen erzeugen.*/

	while (elementRechts >= elementLinks) {

		/*
		(2.1) Absuchen des linken Arrays von links her, bis ein größeres Element als
		das Vergleichselement an der Vergleichsposition vergleichselementIndex
		gefunden wird. startLinks wird jeweils inkrementiert.*/

		printf("Suche von links (ab Stelle %d Wert %d) ein Element größer dem Vergleichselement\n", elementLinks, liste[elementLinks]);

		while (liste[elementLinks] <= liste[vergleichselementIndex]) {
			elementLinks++;
			startLinks++;
			printf("nächster Kandidat: vergleichselement index %d wert %d liste[elementLinks] index %d wert %d\n", vergleichselementIndex, liste[vergleichselementIndex], elementLinks, liste[elementLinks]);
			system("pause");
			if (elementRechts < elementLinks) {
				break;
			}
		}
		if (elementRechts < elementLinks) {
			printf("Suchelemente kreuzen\n");
			break;
		}

		printf("gefunden: vergleichselement index %d wert %d liste[elementLinks] index %d wert %d\n", vergleichselementIndex, liste[vergleichselementIndex], elementLinks, liste[elementLinks]);
		system("pause");

		/*
	(2.2) Absuchen des Arrays von rechts her, bis ein kleineres Element als das
	Vergleichselement gefunden wird. startRechts wird jeweils dekrementiert.*/

		printf("Suche von rechts (ab Stelle %d Wert %d) ein Element kleiner dem Vergleichselement\n", elementRechts, liste[elementRechts]);

		while (liste[elementRechts] >= liste[vergleichselementIndex]) {
			elementRechts--;
			startRechts--;
			printf("nächster Kandidat: vergleichselement index %d wert %d liste[elementRechts] index %d wert %d\n", vergleichselementIndex, liste[vergleichselementIndex], elementRechts, liste[elementRechts]);
			system("pause");
			if (elementRechts < elementLinks) {
				break;
			}
		}
		if (elementRechts < elementLinks) {
			printf("Suchelemente kreuzen\n");
			break;
		}

		printf("gefunden: vergleichselement index %d wert %d liste[elementRechts] index %d wert %d\n", vergleichselementIndex, liste[vergleichselementIndex], elementRechts, liste[elementRechts]);
		system("pause");

		/*
		(2.3) Vertauschen des gefundenen größeren Elements (aktuelle Position
		startLinks) mit dem gefundenen kleineren Element (aktuelle Position
		startRechts).*/

		int tmp;
		tmp = liste[elementLinks];
		liste[elementLinks] = liste[elementRechts];
		liste[elementRechts] = tmp;

		printf("Elemente getauscht:\n");
		qs_output(liste, len_liste);


	}

	/*
	(2.4) Inkrementieren von startLinks und dekrementieren von start-
	Rechts um jeweils 1.*/

	startLinks++;
	startRechts--;

	/*
	!!!??? (2.5) Schritte 2.1 bis 2.3 wiederholen, bis sich die beiden Suchindizes überkreuzen.
	Die Kreuzung definiert die Stelle, an der das Array in Schritt
	(3) in Teilarrays zerteilt wird.*/



	/*         element links
				|
 links|        ||           |rechts
			   |
			element rechts
			*/
			/*
			(2.6) Wenn sich das Vergleichselement nun im linken Teilarray befindet, wird
			es mit dem letzten Element des linken Teilarrays ausgetauscht, da definitionsgemäß
			alle Teilelemente im linken Teilarray kleiner oder gleich
			dem Vergleichselement sind. */

	printf("Nach der Überschneidung\n");
	qs_output(liste, len_liste);

	if (vergleichselementIndex <= elementRechts) {
		int tmp;
		tmp = liste[vergleichselementIndex];
		liste[vergleichselementIndex] = liste[elementRechts];
		liste[elementRechts] = tmp;
		elementRechts--;
	}

	printf("Falls Vergleichselement in linkem Teil, ist dieses getauscht worden\n");
	qs_output(liste, len_liste);

	/*Dasselbe gilt umgekehrt für das rechte
	Teilarray, in dem definitionsgemäß alle Elemente größer oder gleich
	dem Vergleichselement sind. D. h. das Vergleichselement muss dann
	mit dem ersten Element des rechten Teilarrays vertauscht werden, falls
	sich das Vergleichselement in diesem Teilarray befindet. */

	if (vergleichselementIndex >= elementLinks) {
		int tmp;
		tmp = liste[vergleichselementIndex];
		liste[vergleichselementIndex] = liste[elementLinks];
		liste[elementLinks] = tmp;
		elementLinks++;
	}

	printf("Falls Vergleichselement in rechtem Teil, ist dieses getauscht worden\n");
	qs_output(liste, len_liste);

	/*Das Teilarray,
	in welchem das Vergleichselement verschoben wurde, wird nun um einen
	Index verkleinert, da das Vergleichselement sich durch diesen
	Schritt bereits an seiner endgültigen Position befindet.
	*//*
	(3) Rekursive Zerlegung des linken und rechten Teilarrays gemäß (1) und (2) solange,
	bis die Teilarrays weniger als 2 Elemente haben.
		*/

	if(elementRechts + 1 >= 2) qs_sort(liste, elementRechts + 1);
	if(len_liste - elementLinks >= 2) qs_sort(&(liste[elementLinks]), len_liste - elementLinks);
	
	printf("Nach Rekursion:\n");
	qs_output(liste, len_liste);
}


void quicksort() {
	int zahlen[100];
	int anzahl_zahlen;

	anzahl_zahlen = qs_input(zahlen);
	qs_sort(zahlen, anzahl_zahlen);
	qs_output(zahlen, anzahl_zahlen);
}

int main(int argc, char **argv) {
    int choice;
    printf("1 binary operations\n");
    printf("2 cont.multiplication\n");
    printf("3 mean\n");
    printf("4 sin\n");
    printf("5 add given num of numbers\n");
    printf("6 *4 w/o +-*/\n");
    printf("7 cont. addition\n");
	printf("8 quicksort\n");
    scanf("%d", &choice);
    if (choice == 1) binary_operators();
    else if (choice == 2) continuous_multiplication();
    else if (choice == 3) means();
    else if (choice == 4) give_sinus();
    else if (choice == 5) add_num_of_numbers();
    else if (choice == 6) multiply_by_bitshift();
    else if (choice == 7) continuous_addition();
	else if (choice == 8) quicksort();
    system("pause");
    return 0;
}
