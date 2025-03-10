public class Main {
	public static void main(String[] args) {
		choinka(7);
		System.out.println();
		wykres(15);
		enums();
	}

	static void choinka(int rows) {
		for (int i = 1; i < rows * 2; i += 2) {
			for (int j = 0; j < rows - i / 2 - 1; j++)
				System.out.print(" ");
			for (int j = 0; j < i; j++)
				System.out.print("*");
			System.out.println();
		}
	}

	static void wykres(int grid) {
		for (int y = grid; y > -grid; y--) {
			for (int x = grid; x > -grid; x--) {
				if (y == x * x) {
					System.out.print("*");
					continue;
				}
				if (y == x) {
					System.out.print("=");
					continue;
				}
				if (x == 0 || y == 0) {
					System.out.print(".");
					continue;
				}
				System.out.print(" ");
			}
			System.out.println();
		}
	}

	static void enums() {
		enum MyDay {
			HAPPY,
			NOTHAPPY
		}

		MyDay myDay = MyDay.NOTHAPPY;

		String reaction = switch (myDay) {
			case NOTHAPPY -> ":(";
			case HAPPY -> ":)";
		};

		System.out.println(reaction);
	}
}
