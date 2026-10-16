/** @file */
struct THole {
    __cls* cls;

    int id;
    TStar* star_1;
    _pair_float pos_1;
    TStar* star_2;
    _pair_float pos_2;

    int open_turn;
    int status;
    // 1 - обычная ЧД
    // 2 - келлерская ЧД
    // 3 - ЧД готовится к закрытию
    // 4 - КЧД новая?
    PTR graph;
    _gap _2C;
    _gap _2D;
    _gap _2E;
    _gap _2F;
    STR _30;
};

// Сверка с GAMESOURCE (aGalaxy.pas)
static_assert(offsetof(THole, star_1) == 0x08, "THole.star_1");
static_assert(offsetof(THole, star_2) == 0x14, "THole.star_2");
static_assert(offsetof(THole, open_turn) == 0x20, "THole.open_turn");
