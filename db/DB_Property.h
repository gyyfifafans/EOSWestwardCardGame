#ifndef TEMPLET_DB_Property_H
#define TEMPLET_DB_Property_H
#include <map>
#include <tuple>
#include <string>
#include <vector>
#include <eosiolib/eosio.hpp>
using namespace std;
using namespace eosio;
struct DB_Property_Data
{
int id;
int gold;
int gold_fuction;
};
class DB_Property;
static DB_Property* DB_Property_instanse = nullptr;
class DB_Property
{
public:
static DB_Property* getInstanse()
{
    if(DB_Property_instanse)
        return  DB_Property_instanse;
        DB_Property_instanse = new DB_Property();
    return  DB_Property_instanse;
}
int getCount()
{
    return db_data.size();
}
vector<int> getAllIds()
{
    vector<int> ids;
    for(auto &it : db_data)
    {
        ids.push_back(it.first);
    }
    return ids;
}
const DB_Property_Data& getDataById(int id)
{
    auto iter = db_data.find(id);
    eosio_assert(iter==db_data.end(),"id is not exist");
    return iter->second;
};
private:
    map<int,DB_Property_Data> db_data;
public:
DB_Property()
{
    db_data[1] = {1,50000,150000};
    db_data[2] = {2,52000,156000};
    db_data[3] = {3,54000,162000};
    db_data[4] = {4,56000,168000};
    db_data[5] = {5,58000,174000};
    db_data[6] = {6,60000,180000};
    db_data[7] = {7,62000,186000};
    db_data[8] = {8,64000,192000};
    db_data[9] = {9,66000,198000};
    db_data[10] = {10,68000,204000};
    db_data[11] = {11,70000,210000};
    db_data[12] = {12,72000,216000};
    db_data[13] = {13,74000,222000};
    db_data[14] = {14,76000,228000};
    db_data[15] = {15,78000,234000};
    db_data[16] = {16,80000,240000};
    db_data[17] = {17,82000,246000};
    db_data[18] = {18,84000,252000};
    db_data[19] = {19,86000,258000};
    db_data[20] = {20,88000,264000};
    db_data[21] = {21,90000,270000};
    db_data[22] = {22,92000,276000};
    db_data[23] = {23,94000,282000};
    db_data[24] = {24,96000,288000};
    db_data[25] = {25,98000,294000};
    db_data[26] = {26,100000,300000};
    db_data[27] = {27,102000,306000};
    db_data[28] = {28,104000,312000};
    db_data[29] = {29,106000,318000};
    db_data[30] = {30,108000,324000};
    db_data[31] = {31,110000,330000};
    db_data[32] = {32,112000,336000};
    db_data[33] = {33,114000,342000};
    db_data[34] = {34,116000,348000};
    db_data[35] = {35,118000,354000};
    db_data[36] = {36,120000,360000};
    db_data[37] = {37,122000,366000};
    db_data[38] = {38,124000,372000};
    db_data[39] = {39,126000,378000};
    db_data[40] = {40,128000,384000};
    db_data[41] = {41,130000,390000};
    db_data[42] = {42,132000,396000};
    db_data[43] = {43,134000,402000};
    db_data[44] = {44,136000,408000};
    db_data[45] = {45,138000,414000};
    db_data[46] = {46,140000,420000};
    db_data[47] = {47,142000,426000};
    db_data[48] = {48,144000,432000};
    db_data[49] = {49,146000,438000};
    db_data[50] = {50,148000,444000};
    db_data[51] = {51,150000,450000};
    db_data[52] = {52,152000,456000};
    db_data[53] = {53,154000,462000};
    db_data[54] = {54,156000,468000};
    db_data[55] = {55,158000,474000};
    db_data[56] = {56,160000,480000};
    db_data[57] = {57,162000,486000};
    db_data[58] = {58,164000,492000};
    db_data[59] = {59,166000,498000};
    db_data[60] = {60,168000,504000};
    db_data[61] = {61,170000,510000};
    db_data[62] = {62,172000,516000};
    db_data[63] = {63,174000,522000};
    db_data[64] = {64,176000,528000};
    db_data[65] = {65,178000,534000};
    db_data[66] = {66,180000,540000};
    db_data[67] = {67,182000,546000};
    db_data[68] = {68,184000,552000};
    db_data[69] = {69,186000,558000};
    db_data[70] = {70,188000,564000};
    db_data[71] = {71,190000,570000};
    db_data[72] = {72,192000,576000};
    db_data[73] = {73,194000,582000};
    db_data[74] = {74,196000,588000};
    db_data[75] = {75,198000,594000};
    db_data[76] = {76,200000,600000};
    db_data[77] = {77,202000,606000};
    db_data[78] = {78,204000,612000};
    db_data[79] = {79,206000,618000};
    db_data[80] = {80,208000,624000};
    db_data[81] = {81,210000,630000};
    db_data[82] = {82,212000,636000};
    db_data[83] = {83,214000,642000};
    db_data[84] = {84,216000,648000};
    db_data[85] = {85,218000,654000};
    db_data[86] = {86,220000,660000};
    db_data[87] = {87,222000,666000};
    db_data[88] = {88,224000,672000};
    db_data[89] = {89,226000,678000};
    db_data[90] = {90,228000,684000};
    db_data[91] = {91,230000,690000};
    db_data[92] = {92,232000,696000};
    db_data[93] = {93,234000,702000};
    db_data[94] = {94,236000,708000};
    db_data[95] = {95,238000,714000};
    db_data[96] = {96,240000,720000};
    db_data[97] = {97,242000,726000};
    db_data[98] = {98,244000,732000};
    db_data[99] = {99,246000,738000};
    db_data[100] = {100,248000,744000};
    db_data[101] = {101,250000,750000};
    db_data[102] = {102,252000,756000};
    db_data[103] = {103,254000,762000};
    db_data[104] = {104,256000,768000};
    db_data[105] = {105,258000,774000};
    db_data[106] = {106,260000,780000};
    db_data[107] = {107,262000,786000};
    db_data[108] = {108,264000,792000};
    db_data[109] = {109,266000,798000};
    db_data[110] = {110,268000,804000};
    db_data[111] = {111,270000,810000};
    db_data[112] = {112,272000,816000};
    db_data[113] = {113,274000,822000};
    db_data[114] = {114,276000,828000};
    db_data[115] = {115,278000,834000};
    db_data[116] = {116,280000,840000};
    db_data[117] = {117,282000,846000};
    db_data[118] = {118,284000,852000};
    db_data[119] = {119,286000,858000};
    db_data[120] = {120,288000,864000};
    db_data[121] = {121,290000,870000};
    db_data[122] = {122,292000,876000};
    db_data[123] = {123,294000,882000};
    db_data[124] = {124,296000,888000};
    db_data[125] = {125,298000,894000};
    db_data[126] = {126,300000,900000};
    db_data[127] = {127,302000,906000};
    db_data[128] = {128,304000,912000};
    db_data[129] = {129,306000,918000};
    db_data[130] = {130,308000,924000};
    db_data[131] = {131,310000,930000};
    db_data[132] = {132,312000,936000};
    db_data[133] = {133,314000,942000};
    db_data[134] = {134,316000,948000};
    db_data[135] = {135,318000,954000};
    db_data[136] = {136,320000,960000};
    db_data[137] = {137,322000,966000};
    db_data[138] = {138,324000,972000};
    db_data[139] = {139,326000,978000};
    db_data[140] = {140,328000,984000};
    db_data[141] = {141,330000,990000};
    db_data[142] = {142,332000,996000};
    db_data[143] = {143,334000,1002000};
    db_data[144] = {144,336000,1008000};
    db_data[145] = {145,338000,1014000};
    db_data[146] = {146,340000,1020000};
    db_data[147] = {147,342000,1026000};
    db_data[148] = {148,344000,1032000};
    db_data[149] = {149,346000,1038000};
    db_data[150] = {150,348000,1044000};
    db_data[151] = {151,350000,1050000};
    db_data[152] = {152,352000,1056000};
    db_data[153] = {153,354000,1062000};
    db_data[154] = {154,356000,1068000};
    db_data[155] = {155,358000,1074000};
    db_data[156] = {156,360000,1080000};
    db_data[157] = {157,362000,1086000};
    db_data[158] = {158,364000,1092000};
    db_data[159] = {159,366000,1098000};
    db_data[160] = {160,368000,1104000};
    db_data[161] = {161,370000,1110000};
    db_data[162] = {162,372000,1116000};
    db_data[163] = {163,374000,1122000};
    db_data[164] = {164,376000,1128000};
    db_data[165] = {165,378000,1134000};
    db_data[166] = {166,380000,1140000};
    db_data[167] = {167,382000,1146000};
    db_data[168] = {168,384000,1152000};
    db_data[169] = {169,386000,1158000};
    db_data[170] = {170,388000,1164000};
    db_data[171] = {171,390000,1170000};
    db_data[172] = {172,392000,1176000};
    db_data[173] = {173,394000,1182000};
    db_data[174] = {174,396000,1188000};
    db_data[175] = {175,398000,1194000};
    db_data[176] = {176,400000,1200000};
    db_data[177] = {177,402000,1206000};
    db_data[178] = {178,404000,1212000};
    db_data[179] = {179,406000,1218000};
    db_data[180] = {180,408000,1224000};
    db_data[181] = {181,410000,1230000};
    db_data[182] = {182,412000,1236000};
    db_data[183] = {183,414000,1242000};
    db_data[184] = {184,416000,1248000};
    db_data[185] = {185,418000,1254000};
    db_data[186] = {186,420000,1260000};
    db_data[187] = {187,422000,1266000};
    db_data[188] = {188,424000,1272000};
    db_data[189] = {189,426000,1278000};
    db_data[190] = {190,428000,1284000};
    db_data[191] = {191,430000,1290000};
    db_data[192] = {192,432000,1296000};
    db_data[193] = {193,434000,1302000};
    db_data[194] = {194,436000,1308000};
    db_data[195] = {195,438000,1314000};
    db_data[196] = {196,440000,1320000};
    db_data[197] = {197,442000,1326000};
    db_data[198] = {198,444000,1332000};
    db_data[199] = {199,446000,1338000};
    db_data[200] = {200,448000,1344000};
    db_data[201] = {201,450000,1350000};
    db_data[202] = {202,452000,1356000};
    db_data[203] = {203,454000,1362000};
    db_data[204] = {204,456000,1368000};
    db_data[205] = {205,458000,1374000};
    db_data[206] = {206,460000,1380000};
    db_data[207] = {207,462000,1386000};
    db_data[208] = {208,464000,1392000};
    db_data[209] = {209,466000,1398000};
    db_data[210] = {210,468000,1404000};
    db_data[211] = {211,470000,1410000};
    db_data[212] = {212,472000,1416000};
    db_data[213] = {213,474000,1422000};
    db_data[214] = {214,476000,1428000};
    db_data[215] = {215,478000,1434000};
    db_data[216] = {216,480000,1440000};
    db_data[217] = {217,482000,1446000};
    db_data[218] = {218,484000,1452000};
    db_data[219] = {219,486000,1458000};
    db_data[220] = {220,488000,1464000};
    db_data[221] = {221,490000,1470000};
    db_data[222] = {222,492000,1476000};
    db_data[223] = {223,494000,1482000};
    db_data[224] = {224,496000,1488000};
    db_data[225] = {225,498000,1494000};
    db_data[226] = {226,500000,1500000};
    db_data[227] = {227,502000,1506000};
    db_data[228] = {228,504000,1512000};
    db_data[229] = {229,506000,1518000};
    db_data[230] = {230,508000,1524000};
    db_data[231] = {231,510000,1530000};
    db_data[232] = {232,512000,1536000};
    db_data[233] = {233,514000,1542000};
    db_data[234] = {234,516000,1548000};
    db_data[235] = {235,518000,1554000};
    db_data[236] = {236,520000,1560000};
    db_data[237] = {237,522000,1566000};
    db_data[238] = {238,524000,1572000};
    db_data[239] = {239,526000,1578000};
    db_data[240] = {240,528000,1584000};
    db_data[241] = {241,530000,1590000};
    db_data[242] = {242,532000,1596000};
    db_data[243] = {243,534000,1602000};
    db_data[244] = {244,536000,1608000};
    db_data[245] = {245,538000,1614000};
    db_data[246] = {246,540000,1620000};
    db_data[247] = {247,542000,1626000};
    db_data[248] = {248,544000,1632000};
    db_data[249] = {249,546000,1638000};
    db_data[250] = {250,548000,1644000};
    db_data[251] = {251,550000,1650000};
    db_data[252] = {252,552000,1656000};
    db_data[253] = {253,554000,1662000};
    db_data[254] = {254,556000,1668000};
    db_data[255] = {255,558000,1674000};
    db_data[256] = {256,560000,1680000};
    db_data[257] = {257,562000,1686000};
    db_data[258] = {258,564000,1692000};
    db_data[259] = {259,566000,1698000};
    db_data[260] = {260,568000,1704000};
    db_data[261] = {261,570000,1710000};
    db_data[262] = {262,572000,1716000};
    db_data[263] = {263,574000,1722000};
    db_data[264] = {264,576000,1728000};
    db_data[265] = {265,578000,1734000};
    db_data[266] = {266,580000,1740000};
    db_data[267] = {267,582000,1746000};
    db_data[268] = {268,584000,1752000};
    db_data[269] = {269,586000,1758000};
    db_data[270] = {270,588000,1764000};
    db_data[271] = {271,590000,1770000};
    db_data[272] = {272,592000,1776000};
    db_data[273] = {273,594000,1782000};
    db_data[274] = {274,596000,1788000};
    db_data[275] = {275,598000,1794000};
    db_data[276] = {276,600000,1800000};
    db_data[277] = {277,602000,1806000};
    db_data[278] = {278,604000,1812000};
    db_data[279] = {279,606000,1818000};
    db_data[280] = {280,608000,1824000};
    db_data[281] = {281,610000,1830000};
    db_data[282] = {282,612000,1836000};
    db_data[283] = {283,614000,1842000};
    db_data[284] = {284,616000,1848000};
    db_data[285] = {285,618000,1854000};
    db_data[286] = {286,620000,1860000};
    db_data[287] = {287,622000,1866000};
    db_data[288] = {288,624000,1872000};
    db_data[289] = {289,626000,1878000};
    db_data[290] = {290,628000,1884000};
    db_data[291] = {291,630000,1890000};
    db_data[292] = {292,632000,1896000};
    db_data[293] = {293,634000,1902000};
    db_data[294] = {294,636000,1908000};
    db_data[295] = {295,638000,1914000};
    db_data[296] = {296,640000,1920000};
    db_data[297] = {297,642000,1926000};
    db_data[298] = {298,644000,1932000};
    db_data[299] = {299,646000,1938000};
    db_data[300] = {300,648000,1944000};
    db_data[301] = {301,650000,1950000};
}
};
#endif //TEMPLET_DB_BATTLEAI_H
