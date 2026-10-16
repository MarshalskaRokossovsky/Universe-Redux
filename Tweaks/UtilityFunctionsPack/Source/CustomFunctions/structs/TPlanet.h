/** @file */
struct TPlanet {
    __cls* cls;

    unsigned int id;
    int gen_seed;
    int rnd_seed;
    int graph_no;
    STR name;
    TStar* star;
	unsigned int polar_pos_padding; //Филлерный отступ перед record
    _pair_double polar_pos; //polar_pos.x - angle, polar_pos.y - radius
    _gap _030;
    _gap _031;
    _gap _032;
    _gap _033;
    _gap _034;
    _gap _035;
    _gap _036;
    _gap _037;
    int radius;
    double angle_speed;
	unsigned int invention_levels_padding; //Филлерный отступ перед record
	byte invention_levels[20];
    byte cur_invention;
    _gap _05B;
    _gap _05D;
    _gap _05E;
    float cur_invention_points;
    _gap _063;
    _gap _064;
    _gap _065;
    _gap _066;
    int population;
    byte eco;
    _gap _067;
    _gap _06D;
    _gap _06E;
    _gap _06F;
    _gap _070;
    _gap _071;
    _gap _072;
    byte owner;
    bool _075;
    byte race;
    byte gov;
    TGoodsShopItem goods_shop[8];
    byte goods_scarcity_ticks[8];       // GoodsScarcityTicks @0xF8
    byte goods_surplus_ticks[8];        // GoodsSurplusTicks @0x100
    int text_quest_id;                  // TextQuestId @0x108: номер текстового квеста планеты, -1 если нет
    TList* relation_to_rangers;
    TList* equipment_store_items; //когда игрок садится на планету, данный список обнуляется, а его содержимое перетаскивается в глобальный список закупки (после взлёта игрока он заполняется снова)
    TList* warriors;
    int spawned_rangers_count; //число созданных планетой рейнджеров, необходимое для контроля рождаемости
    _gap _124;
    _gap _125;
    _gap _126;
    _gap _127;
    int water_total; //Общая водная площадь планеты
    int water_researched; //Исследованная водная площадь планеты
    int plains_total; //Общая равнинная площадь планеты
    int plains_researched; //Исследованная равнинная площадь планеты
    int mountains_total; //Общая гористая площадь планеты
    int mountains_researched; //Исследованная гористая площадь планеты
	char orbit_cnt; //Максимальное число орбит для размещения зондов
	bool is_visited; //Получает true, когда игрок впервые посещает эту планету
    _gap empty_align_1;
    _gap empty_align_2;
    TList* buried_items; //Список закопанных на планете предметов в структурах TGoneItem (при генерации заполняется только для незаселёнок)
	int graph_radius;
    TObjectSE* graph_object;
    WSTR graph_name;
    _gap _158;
    _gap _159;
    _gap _15A;
    _gap _15B;
    _gap_32 _15C;
    _gap_32 _15C_;
    _gap_32 _164; // PTR graph;
    byte no_landing;
    byte no_shop_update;
    bool no_auto_ship_spawning;         // NoAutomaticShipSpawning @0x15E, PlanetExtraFlags бит 0
    bool no_random_events;              // NoRandomEvents @0x15F, PlanetExtraFlags бит 1
};

// Сверка с GAMESOURCE (aPlanet.pas, @offset)
static_assert(offsetof(TPlanet, gen_seed) == 0x08, "TPlanet.gen_seed");
static_assert(offsetof(TPlanet, rnd_seed) == 0x0C, "TPlanet.rnd_seed");
static_assert(offsetof(TPlanet, name) == 0x14, "TPlanet.name");
static_assert(offsetof(TPlanet, star) == 0x18, "TPlanet.star");
static_assert(offsetof(TPlanet, population) == 0x68, "TPlanet.population");
static_assert(offsetof(TPlanet, eco) == 0x6C, "TPlanet.eco");
static_assert(offsetof(TPlanet, owner) == 0x74, "TPlanet.owner");
static_assert(offsetof(TPlanet, race) == 0x76, "TPlanet.race");
static_assert(offsetof(TPlanet, gov) == 0x77, "TPlanet.gov");
static_assert(offsetof(TPlanet, goods_shop) == 0x78, "TPlanet.goods_shop");
static_assert(offsetof(TPlanet, goods_scarcity_ticks) == 0xF8, "TPlanet.goods_scarcity_ticks");
static_assert(offsetof(TPlanet, goods_surplus_ticks) == 0x100, "TPlanet.goods_surplus_ticks");
static_assert(offsetof(TPlanet, text_quest_id) == 0x108, "TPlanet.text_quest_id");
static_assert(offsetof(TPlanet, relation_to_rangers) == 0x10C, "TPlanet.relation_to_rangers");
static_assert(offsetof(TPlanet, warriors) == 0x114, "TPlanet.warriors");
static_assert(offsetof(TPlanet, water_total) == 0x120, "TPlanet.water_total");
static_assert(offsetof(TPlanet, orbit_cnt) == 0x138, "TPlanet.orbit_cnt");
static_assert(offsetof(TPlanet, buried_items) == 0x13C, "TPlanet.buried_items");
static_assert(offsetof(TPlanet, no_landing) == 0x15C, "TPlanet.no_landing");
static_assert(offsetof(TPlanet, no_shop_update) == 0x15D, "TPlanet.no_shop_update");
static_assert(offsetof(TPlanet, no_auto_ship_spawning) == 0x15E, "TPlanet.no_auto_ship_spawning");
static_assert(offsetof(TPlanet, no_random_events) == 0x15F, "TPlanet.no_random_events");
static_assert(sizeof(TPlanet) == 0x160, "sizeof(TPlanet)");
