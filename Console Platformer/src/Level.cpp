#include "Header.h"

void StartLevel(int index)
{
	ground.clear();
	walls.clear();
	blocks.clear();

	if (index == 11)
	{
		///GROUND--------------------------------------------------
		for (int i = 0; i < 69; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 19;
			blocks.push_back(tmpAdd);
		}

		for (int i = 0; i < 69; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 20;
			blocks.push_back(tmpAdd);
		}

		for (int i = 71; i < 86; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 19;
			blocks.push_back(tmpAdd);
		}

		for (int i = 71; i < 86; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 20;
			blocks.push_back(tmpAdd);
		}

		for (int i = 89; i < 153; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 19;
			blocks.push_back(tmpAdd);
		}

		for (int i = 89; i < 153; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 20;
			blocks.push_back(tmpAdd);
		}

		for (int i = 154; i < 211; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 19;
			blocks.push_back(tmpAdd);
		}

		for (int i = 154; i < 211; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 20;
			blocks.push_back(tmpAdd);
		}

		///EDGE WALLS--------------------------------------------------
		for (int i = 0; i < 21; i++)
		{
			tmpAdd.x = 0;
			tmpAdd.y = i;
			blocks.push_back(tmpAdd);
		}

		for (int i = 0; i < 21; i++)
		{
			tmpAdd.x = 250;
			tmpAdd.y = i;
			blocks.push_back(tmpAdd);
		}

		///BLOCKS AT START--------------------------------------------------
		tmpAdd.x = 16;
		tmpAdd.y = 15;
		questionBlocks.push_back(tmpAdd);

        tmpAdd.x = 20;
        tmpAdd.y = 15;
        blocks.push_back(tmpAdd);

		tmpAdd.x = 21;
		tmpAdd.y = 15;
		questionBlocks.push_back(tmpAdd);

        tmpAdd.x = 22;
        tmpAdd.y = 15;
        blocks.push_back(tmpAdd);

		tmpAdd.x = 23;
		tmpAdd.y = 15;
		questionBlocks.push_back(tmpAdd);

        tmpAdd.x = 24;
        tmpAdd.y = 15;
        blocks.push_back(tmpAdd);

		tmpAdd.x = 22;
		tmpAdd.y = 11;
		questionBlocks.push_back(tmpAdd);

		///PIPES--------------------------------------------------
		for (int i = 28; i < 30; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 18;
			blocks.push_back(tmpAdd);
		}

		for (int i = 28; i < 30; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 17;
			blocks.push_back(tmpAdd);
		}

		for (int i = 38; i < 40; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 18;
			blocks.push_back(tmpAdd);
		}

		for (int i = 38; i < 40; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 17;
			blocks.push_back(tmpAdd);
		}

		for (int i = 38; i < 40; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 16;
			blocks.push_back(tmpAdd);
		}

		for (int i = 46; i < 48; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 18;
			blocks.push_back(tmpAdd);
		}

		for (int i = 46; i < 48; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 17;
			blocks.push_back(tmpAdd);
		}

		for (int i = 46; i < 48; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 16;
			blocks.push_back(tmpAdd);
		}

		for (int i = 46; i < 48; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 15;
			blocks.push_back(tmpAdd);
		}

		for (int i = 57; i < 59; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 18;
			blocks.push_back(tmpAdd);
		}

		for (int i = 57; i < 59; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 17;
			blocks.push_back(tmpAdd);
		}

		for (int i = 57; i < 59; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 16;
			blocks.push_back(tmpAdd);
		}

		for (int i = 57; i < 59; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 15;
			blocks.push_back(tmpAdd);
		}

		///BLOCKS ON SECOND AND THIRD GROUND PLATFORMS--------------------------------------------------
        tmpAdd.x = 77;
        tmpAdd.y = 15;
        blocks.push_back(tmpAdd);

        tmpAdd.x = 78;
        tmpAdd.y = 15;
        questionBlocks.push_back(tmpAdd);

        tmpAdd.x = 79;
        tmpAdd.y = 15;
        blocks.push_back(tmpAdd);

		for (int i = 80; i < 88; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 11;
			blocks.push_back(tmpAdd);
		}

		for (int i = 91; i < 95; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 11;
			blocks.push_back(tmpAdd);
		}

		tmpAdd.x = 94;
		tmpAdd.y = 15;
		blocks.push_back(tmpAdd);

		for (int i = 100; i < 102; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 15;
			blocks.push_back(tmpAdd);
		}

		tmpAdd.x = 106;
		tmpAdd.y = 15;
		blocks.push_back(tmpAdd);

		tmpAdd.x = 109;
		tmpAdd.y = 15;
		blocks.push_back(tmpAdd);

		tmpAdd.x = 112;
		tmpAdd.y = 15;
		blocks.push_back(tmpAdd);

		tmpAdd.x = 109;
		tmpAdd.y = 11;
		blocks.push_back(tmpAdd);

		tmpAdd.x = 118;
		tmpAdd.y = 15;
		blocks.push_back(tmpAdd);

		for (int i = 121; i < 124; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 11;
			blocks.push_back(tmpAdd);
		}

		for (int i = 128; i < 132; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 11;
			blocks.push_back(tmpAdd);
		}

		for (int i = 129; i < 131; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 15;
			blocks.push_back(tmpAdd);
		}

		for (int i = 134; i < 138; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 18;
			blocks.push_back(tmpAdd);
		}

		for (int i = 135; i < 138; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 17;
			blocks.push_back(tmpAdd);
		}

		for (int i = 136; i < 138; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 16;
			blocks.push_back(tmpAdd);
		}

		tmpAdd.x = 137;
		tmpAdd.y = 15;
		blocks.push_back(tmpAdd);

		for (int i = 140; i < 144; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 18;
			blocks.push_back(tmpAdd);
		}

		for (int i = 140; i < 143; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 17;
			blocks.push_back(tmpAdd);
		}

		for (int i = 140; i < 142; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 16;
			blocks.push_back(tmpAdd);
		}

		tmpAdd.x = 140;
		tmpAdd.y = 15;
		blocks.push_back(tmpAdd);

		for (int i = 148; i < 153; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 18;
			blocks.push_back(tmpAdd);
		}

		for (int i = 149; i < 153; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 17;
			blocks.push_back(tmpAdd);
		}

		for (int i = 150; i < 153; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 16;
			blocks.push_back(tmpAdd);
		}

		for (int i = 151; i < 153; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 15;
			blocks.push_back(tmpAdd);
		}

		///BLOCKS ON FOURTH GROUND PLATFORMS--------------------------------------------------
		for (int i = 154; i < 158; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 18;
			blocks.push_back(tmpAdd);
		}

		for (int i = 154; i < 157; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 17;
			blocks.push_back(tmpAdd);
		}

		for (int i = 154; i < 156; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 16;
			blocks.push_back(tmpAdd);
		}

		tmpAdd.x = 154;
		tmpAdd.y = 15;
		blocks.push_back(tmpAdd);

		for (int i = 162; i < 164; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 18;
			blocks.push_back(tmpAdd);
		}

		for (int i = 162; i < 164; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 17;
			blocks.push_back(tmpAdd);
		}

		for (int i = 167; i < 171; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 15;
			blocks.push_back(tmpAdd);
		}

		for (int i = 178; i < 180; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 18;
			blocks.push_back(tmpAdd);
		}

		for (int i = 178; i < 180; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 17;
			blocks.push_back(tmpAdd);
		}

		for (int i = 180; i < 189; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 18;
			blocks.push_back(tmpAdd);
		}

		for (int i = 181; i < 189; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 17;
			blocks.push_back(tmpAdd);
		}

		for (int i = 182; i < 189; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 16;
			blocks.push_back(tmpAdd);
		}

		for (int i = 183; i < 189; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 15;
			blocks.push_back(tmpAdd);
		}

		for (int i = 184; i < 189; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 14;
			blocks.push_back(tmpAdd);
		}

		for (int i = 185; i < 189; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 13;
			blocks.push_back(tmpAdd);
		}

		for (int i = 186; i < 189; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 12;
			blocks.push_back(tmpAdd);
		}

		for (int i = 187; i < 189; i++)
		{
			tmpAdd.x = i;
			tmpAdd.y = 11;
			blocks.push_back(tmpAdd);
		}

		tmpAdd.x = 197;
		tmpAdd.y = 18;
		blocks.push_back(tmpAdd);
	}
}
