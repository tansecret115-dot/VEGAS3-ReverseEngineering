/* Module: erv33260.dll
   Function: FUN_67089400
   Address: 67089400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_67089400(undefined4 param_1,int param_2,int param_3,int *param_4,char *param_5,int param_6,
            undefined *param_7)

{
  short *psVar1;
  short *psVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined1 auVar80 [15];
  undefined1 auVar81 [15];
  undefined1 auVar82 [15];
  undefined1 auVar83 [15];
  undefined1 auVar84 [15];
  undefined1 auVar85 [15];
  undefined1 auVar86 [15];
  undefined1 auVar87 [15];
  undefined1 auVar88 [15];
  undefined1 auVar89 [15];
  undefined1 auVar90 [15];
  undefined1 auVar91 [15];
  undefined1 auVar92 [15];
  undefined1 auVar93 [15];
  undefined1 auVar94 [15];
  undefined1 auVar95 [15];
  undefined1 auVar96 [15];
  undefined1 auVar97 [15];
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined1 auVar114 [15];
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  undefined1 auVar120 [15];
  undefined1 auVar121 [15];
  undefined1 auVar122 [15];
  undefined1 auVar123 [15];
  undefined1 auVar124 [15];
  undefined1 auVar125 [15];
  undefined1 auVar126 [15];
  undefined1 auVar127 [15];
  undefined1 auVar128 [15];
  undefined1 auVar129 [15];
  undefined1 auVar130 [15];
  undefined1 auVar131 [15];
  undefined1 auVar132 [15];
  undefined1 auVar133 [15];
  undefined1 auVar134 [15];
  undefined1 auVar135 [15];
  undefined1 auVar136 [15];
  undefined1 auVar137 [15];
  undefined1 auVar138 [15];
  undefined1 auVar139 [15];
  undefined1 auVar140 [15];
  undefined1 auVar141 [15];
  undefined1 auVar142 [15];
  undefined1 auVar143 [15];
  undefined1 auVar144 [15];
  undefined1 auVar145 [15];
  undefined1 auVar146 [15];
  undefined1 auVar147 [15];
  undefined1 auVar148 [15];
  undefined1 auVar149 [15];
  undefined1 auVar150 [15];
  undefined1 auVar151 [15];
  undefined1 auVar152 [15];
  undefined1 auVar153 [15];
  undefined1 auVar154 [15];
  undefined1 auVar155 [15];
  undefined1 auVar156 [15];
  undefined1 auVar157 [15];
  undefined1 auVar158 [15];
  undefined1 auVar159 [15];
  undefined1 auVar160 [15];
  undefined1 auVar161 [15];
  undefined1 auVar162 [15];
  undefined1 auVar163 [15];
  undefined1 auVar164 [15];
  undefined1 auVar165 [15];
  undefined1 auVar166 [15];
  undefined1 auVar167 [15];
  undefined1 auVar168 [15];
  undefined1 auVar169 [15];
  unkuint9 Var170;
  undefined1 auVar171 [11];
  undefined1 auVar172 [13];
  undefined1 auVar173 [15];
  unkuint9 Var174;
  undefined1 auVar175 [11];
  undefined1 auVar176 [15];
  unkuint9 Var177;
  undefined1 auVar178 [11];
  undefined1 auVar179 [13];
  undefined1 auVar180 [15];
  unkuint9 Var181;
  undefined1 auVar182 [11];
  undefined1 auVar183 [15];
  undefined1 auVar184 [11];
  undefined1 auVar185 [15];
  undefined1 auVar186 [11];
  undefined1 auVar187 [13];
  undefined1 auVar188 [15];
  undefined1 auVar189 [11];
  undefined1 auVar190 [15];
  undefined1 auVar191 [11];
  undefined1 auVar192 [13];
  undefined1 auVar193 [15];
  undefined1 auVar194 [11];
  undefined1 auVar195 [15];
  undefined1 auVar196 [11];
  undefined1 auVar197 [15];
  undefined1 auVar198 [11];
  undefined1 auVar199 [13];
  undefined1 auVar200 [15];
  undefined1 auVar201 [11];
  undefined1 auVar202 [15];
  undefined1 auVar203 [11];
  undefined1 auVar204 [13];
  undefined1 auVar205 [15];
  undefined1 auVar206 [11];
  undefined1 auVar207 [15];
  undefined1 auVar208 [11];
  undefined1 auVar209 [13];
  undefined1 auVar210 [15];
  undefined1 auVar211 [11];
  undefined1 auVar212 [15];
  undefined1 auVar213 [11];
  undefined1 auVar214 [13];
  undefined1 auVar215 [15];
  undefined1 auVar216 [11];
  undefined1 auVar217 [15];
  undefined1 auVar218 [11];
  undefined1 auVar219 [15];
  undefined1 auVar220 [11];
  undefined1 auVar221 [15];
  undefined1 auVar222 [11];
  undefined1 auVar223 [15];
  undefined1 auVar224 [11];
  undefined1 auVar225 [15];
  undefined1 auVar226 [11];
  undefined1 auVar227 [15];
  undefined1 auVar228 [11];
  undefined1 auVar229 [15];
  undefined1 auVar230 [15];
  undefined1 auVar231 [15];
  undefined1 auVar232 [15];
  undefined1 auVar233 [15];
  undefined1 auVar234 [15];
  undefined1 auVar235 [15];
  undefined1 auVar236 [15];
  undefined1 auVar237 [15];
  undefined1 auVar238 [15];
  undefined1 auVar239 [15];
  undefined1 auVar240 [15];
  undefined1 auVar241 [15];
  undefined1 auVar242 [15];
  undefined1 auVar243 [15];
  undefined1 auVar244 [15];
  undefined1 auVar245 [15];
  undefined1 auVar246 [15];
  undefined1 auVar247 [15];
  undefined1 auVar248 [15];
  undefined1 auVar249 [15];
  undefined1 auVar250 [15];
  undefined1 auVar251 [15];
  undefined1 auVar252 [15];
  undefined1 auVar253 [15];
  undefined1 auVar254 [15];
  undefined1 auVar255 [15];
  undefined1 auVar256 [15];
  undefined1 auVar257 [15];
  undefined1 auVar258 [15];
  undefined1 auVar259 [15];
  undefined1 auVar260 [15];
  undefined1 auVar261 [15];
  undefined1 auVar262 [15];
  undefined1 auVar263 [15];
  undefined1 auVar264 [15];
  undefined1 auVar265 [15];
  undefined1 auVar266 [15];
  undefined1 auVar267 [15];
  undefined1 auVar268 [15];
  undefined1 auVar269 [15];
  undefined1 auVar270 [15];
  undefined1 auVar271 [15];
  undefined1 auVar272 [15];
  undefined1 auVar273 [15];
  undefined1 auVar274 [15];
  undefined1 auVar275 [15];
  undefined1 auVar276 [15];
  int iVar277;
  int iVar278;
  undefined1 *puVar279;
  int iVar280;
  ulonglong *puVar281;
  undefined8 *puVar282;
  undefined8 *puVar283;
  undefined1 *puVar284;
  uint uVar285;
  ushort uVar286;
  ushort uVar287;
  ushort uVar289;
  ushort uVar290;
  ushort uVar291;
  ushort uVar292;
  ushort uVar293;
  ushort uVar294;
  ushort uVar295;
  ushort uVar296;
  ushort uVar297;
  ushort uVar298;
  ushort uVar299;
  ushort uVar300;
  undefined1 auVar288 [16];
  ushort uVar301;
  ushort uVar302;
  byte bVar309;
  short sVar303;
  undefined1 uVar310;
  undefined1 uVar313;
  short sVar312;
  undefined1 uVar314;
  undefined1 uVar316;
  short sVar315;
  undefined1 uVar317;
  undefined1 uVar320;
  short sVar318;
  short sVar319;
  short sVar321;
  short sVar322;
  short sVar323;
  short sVar324;
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  byte bVar311;
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  short sVar327;
  short sVar333;
  short sVar334;
  undefined1 uVar335;
  short sVar336;
  short sVar337;
  short sVar338;
  short sVar339;
  short sVar340;
  short sVar341;
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar342 [16];
  undefined8 local_730 [32];
  undefined8 local_630 [32];
  undefined1 local_530 [64];
  undefined1 local_4f0 [576];
  undefined1 local_2b0 [32];
  undefined1 local_290 [584];
  undefined4 uStack_48;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  
  local_20 = (undefined1 *)&local_24;
  local_24 = param_6 + -8;
  if (param_6 < 8) {
    uStack_48 = 0x67089a80;
    FUN_67087f00(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    puVar283 = local_730;
    puVar284 = local_4f0;
    iVar280 = param_2 + -2;
    iVar278 = local_24;
    puVar282 = puVar283;
    iVar277 = param_6;
    do {
      do {
        auVar304 = *(undefined1 (*) [16])(iVar280 + iVar278);
        uVar320 = auVar304[8];
        auVar29[0xd] = 0;
        auVar29._0_13_ = auVar304._1_13_;
        auVar29[0xe] = uVar320;
        uVar317 = auVar304[7];
        auVar53[0xc] = uVar317;
        auVar53._0_12_ = auVar304._1_12_;
        auVar53._13_2_ = auVar29._13_2_;
        auVar77[0xb] = 0;
        auVar77._0_11_ = auVar304._1_11_;
        auVar77._12_3_ = auVar53._12_3_;
        uVar316 = auVar304[6];
        auVar101[10] = uVar316;
        auVar101._0_10_ = auVar304._1_10_;
        auVar101._11_4_ = auVar77._11_4_;
        auVar125[9] = 0;
        auVar125._0_9_ = auVar304._1_9_;
        auVar125._10_5_ = auVar101._10_5_;
        uVar314 = auVar304[5];
        auVar149[8] = uVar314;
        auVar149._0_8_ = auVar304._1_8_;
        auVar149._9_6_ = auVar125._9_6_;
        auVar169._7_8_ = 0;
        auVar169._0_7_ = auVar149._8_7_;
        uVar313 = auVar304[4];
        Var170 = CONCAT81(SUB158(auVar169 << 0x40,7),uVar313);
        auVar229._9_6_ = 0;
        auVar229._0_9_ = Var170;
        uVar310 = auVar304[3];
        auVar171._1_10_ = SUB1510(auVar229 << 0x30,5);
        auVar171[0] = uVar310;
        auVar230._11_4_ = 0;
        auVar230._0_11_ = auVar171;
        bVar309 = auVar304[2];
        auVar172._1_12_ = SUB1512(auVar230 << 0x20,3);
        auVar172[0] = bVar309;
        bVar311 = auVar304[1];
        auVar9[0xd] = 0;
        auVar9._0_13_ = auVar304._3_13_;
        auVar9[0xe] = auVar304[10];
        uVar335 = auVar304[9];
        auVar30[0xc] = uVar335;
        auVar30._0_12_ = auVar304._3_12_;
        auVar30._13_2_ = auVar9._13_2_;
        auVar54[0xb] = 0;
        auVar54._0_11_ = auVar304._3_11_;
        auVar54._12_3_ = auVar30._12_3_;
        auVar78[10] = uVar320;
        auVar78._0_10_ = auVar304._3_10_;
        auVar78._11_4_ = auVar54._11_4_;
        auVar102[9] = 0;
        auVar102._0_9_ = auVar304._3_9_;
        auVar102._10_5_ = auVar78._10_5_;
        auVar126[8] = uVar317;
        auVar126._0_8_ = auVar304._3_8_;
        auVar126._9_6_ = auVar102._9_6_;
        auVar173._7_8_ = 0;
        auVar173._0_7_ = auVar126._8_7_;
        Var174 = CONCAT81(SUB158(auVar173 << 0x40,7),uVar316);
        auVar231._9_6_ = 0;
        auVar231._0_9_ = Var174;
        auVar175._1_10_ = SUB1510(auVar231 << 0x30,5);
        auVar175[0] = uVar314;
        auVar232._11_4_ = 0;
        auVar232._0_11_ = auVar175;
        auVar153[2] = uVar313;
        auVar153._0_2_ = auVar304._3_2_;
        auVar153._3_12_ = SUB1512(auVar232 << 0x20,3);
        uVar289 = auVar304._3_2_ & 0xff;
        auVar10[0xd] = 0;
        auVar10._0_13_ = auVar304._2_13_;
        auVar10[0xe] = uVar335;
        auVar31[0xc] = uVar320;
        auVar31._0_12_ = auVar304._2_12_;
        auVar31._13_2_ = auVar10._13_2_;
        auVar55[0xb] = 0;
        auVar55._0_11_ = auVar304._2_11_;
        auVar55._12_3_ = auVar31._12_3_;
        auVar79[10] = uVar317;
        auVar79._0_10_ = auVar304._2_10_;
        auVar79._11_4_ = auVar55._11_4_;
        auVar103[9] = 0;
        auVar103._0_9_ = auVar304._2_9_;
        auVar103._10_5_ = auVar79._10_5_;
        auVar127[8] = uVar316;
        auVar127._0_8_ = auVar304._2_8_;
        auVar127._9_6_ = auVar103._9_6_;
        auVar176._7_8_ = 0;
        auVar176._0_7_ = auVar127._8_7_;
        Var177 = CONCAT81(SUB158(auVar176 << 0x40,7),uVar314);
        auVar233._9_6_ = 0;
        auVar233._0_9_ = Var177;
        auVar178._1_10_ = SUB1510(auVar233 << 0x30,5);
        auVar178[0] = uVar313;
        auVar234._11_4_ = 0;
        auVar234._0_11_ = auVar178;
        auVar179._1_12_ = SUB1512(auVar234 << 0x20,3);
        auVar179[0] = uVar310;
        auVar11[0xd] = 0;
        auVar11._0_13_ = auVar304._3_13_ >> 8;
        auVar11[0xe] = auVar304[0xb];
        auVar32[0xc] = auVar304[10];
        auVar32._0_12_ = auVar304._4_12_;
        auVar32._13_2_ = auVar11._13_2_;
        auVar56[0xb] = 0;
        auVar56._0_11_ = auVar304._4_11_;
        auVar56._12_3_ = auVar32._12_3_;
        auVar80[10] = uVar335;
        auVar80._0_10_ = auVar304._4_10_;
        auVar80._11_4_ = auVar56._11_4_;
        auVar104[9] = 0;
        auVar104._0_9_ = auVar304._4_9_;
        auVar104._10_5_ = auVar80._10_5_;
        auVar128[8] = uVar320;
        auVar128._0_8_ = auVar304._4_8_;
        auVar128._9_6_ = auVar104._9_6_;
        auVar180._7_8_ = 0;
        auVar180._0_7_ = auVar128._8_7_;
        Var181 = CONCAT81(SUB158(auVar180 << 0x40,7),uVar317);
        auVar235._9_6_ = 0;
        auVar235._0_9_ = Var181;
        auVar182._1_10_ = SUB1510(auVar235 << 0x30,5);
        auVar182[0] = uVar316;
        auVar236._11_4_ = 0;
        auVar236._0_11_ = auVar182;
        auVar154[2] = uVar314;
        auVar154._0_2_ = auVar304._4_2_;
        auVar154._3_12_ = SUB1512(auVar236 << 0x20,3);
        sVar318 = (short)Var170;
        uVar286 = auVar29._13_2_ >> 8;
        auVar12[0xd] = 0;
        auVar12._0_13_ = auVar304._0_13_;
        auVar12[0xe] = uVar317;
        auVar33[0xc] = uVar316;
        auVar33._0_12_ = auVar304._0_12_;
        auVar33._13_2_ = auVar12._13_2_;
        auVar57[0xb] = 0;
        auVar57._0_11_ = auVar304._0_11_;
        auVar57._12_3_ = auVar33._12_3_;
        auVar81[10] = uVar314;
        auVar81._0_10_ = auVar304._0_10_;
        auVar81._11_4_ = auVar57._11_4_;
        auVar105[9] = 0;
        auVar105._0_9_ = auVar304._0_9_;
        auVar105._10_5_ = auVar81._10_5_;
        auVar129[8] = uVar313;
        auVar129._0_8_ = auVar304._0_8_;
        auVar129._9_6_ = auVar105._9_6_;
        auVar183._7_8_ = 0;
        auVar183._0_7_ = auVar129._8_7_;
        Var170 = CONCAT81(SUB158(auVar183 << 0x40,7),uVar310);
        auVar237._9_6_ = 0;
        auVar237._0_9_ = Var170;
        auVar184._1_10_ = SUB1510(auVar237 << 0x30,5);
        auVar184[0] = bVar309;
        auVar238._11_4_ = 0;
        auVar238._0_11_ = auVar184;
        auVar155[2] = bVar311;
        auVar155._0_2_ = auVar304._0_2_;
        auVar155._3_12_ = SUB1512(auVar238 << 0x20,3);
        sVar336 = (short)Var174;
        uVar287 = auVar9._13_2_ >> 8;
        sVar303 = (ushort)bVar309 * _DAT_6709a840 * 2;
        sVar312 = auVar179._0_2_ * sRam6709a842 * 2;
        sVar315 = auVar178._0_2_ * sRam6709a844 * 2;
        sVar319 = (short)Var177 * sRam6709a846 * 2;
        sVar321 = auVar127._8_2_ * sRam6709a848 * 2;
        sVar322 = auVar79._10_2_ * sRam6709a84a * 2;
        sVar323 = auVar31._12_2_ * sRam6709a84c * 2;
        sVar324 = (auVar10._13_2_ >> 8) * sRam6709a84e * 2;
        sVar327 = (uVar289 * _DAT_6709a840 - ((auVar304._4_2_ & 0xff) + (ushort)bVar311)) + sVar303;
        sVar333 = (auVar153._2_2_ * sRam6709a842 - (auVar154._2_2_ + auVar172._0_2_)) + sVar312;
        sVar334 = (auVar175._0_2_ * sRam6709a844 - (auVar182._0_2_ + auVar171._0_2_)) + sVar315;
        sVar337 = (sVar336 * sRam6709a846 - ((short)Var181 + sVar318)) + sVar319;
        sVar338 = (auVar126._8_2_ * sRam6709a848 - (auVar128._8_2_ + auVar149._8_2_)) + sVar321;
        sVar339 = (auVar78._10_2_ * sRam6709a84a - (auVar80._10_2_ + auVar101._10_2_)) + sVar322;
        sVar340 = (auVar30._12_2_ * sRam6709a84c - (auVar32._12_2_ + auVar53._12_2_)) + sVar323;
        sVar341 = (uVar287 * sRam6709a84e - ((auVar11._13_2_ >> 8) + uVar286)) + sVar324;
        sVar303 = ((ushort)bVar311 * _DAT_6709a840 - ((auVar304._0_2_ & 0xff) + uVar289)) + sVar303;
        sVar312 = (auVar172._0_2_ * sRam6709a842 - (auVar155._2_2_ + auVar153._2_2_)) + sVar312;
        sVar315 = (auVar171._0_2_ * sRam6709a844 - (auVar184._0_2_ + auVar175._0_2_)) + sVar315;
        sVar319 = (sVar318 * sRam6709a846 - ((short)Var170 + sVar336)) + sVar319;
        sVar321 = (auVar149._8_2_ * sRam6709a848 - (auVar129._8_2_ + auVar126._8_2_)) + sVar321;
        sVar322 = (auVar101._10_2_ * sRam6709a84a - (auVar81._10_2_ + auVar78._10_2_)) + sVar322;
        sVar323 = (auVar53._12_2_ * sRam6709a84c - (auVar33._12_2_ + auVar30._12_2_)) + sVar323;
        sVar324 = (uVar286 * sRam6709a84e - ((auVar12._13_2_ >> 8) + uVar287)) + sVar324;
        psVar1 = (short *)(puVar284 + iVar278 * 2);
        *psVar1 = sVar327;
        psVar1[1] = sVar333;
        psVar1[2] = sVar334;
        psVar1[3] = sVar337;
        psVar1[4] = sVar338;
        psVar1[5] = sVar339;
        psVar1[6] = sVar340;
        psVar1[7] = sVar341;
        auVar328._0_2_ = sVar327 + _DAT_6709a870;
        auVar328._2_2_ = sVar333 + sRam6709a872;
        auVar328._4_2_ = sVar334 + sRam6709a874;
        auVar328._6_2_ = sVar337 + sRam6709a876;
        auVar328._8_2_ = sVar338 + sRam6709a878;
        auVar328._10_2_ = sVar339 + sRam6709a87a;
        auVar328._12_2_ = sVar340 + sRam6709a87c;
        auVar328._14_2_ = sVar341 + sRam6709a87e;
        auVar328 = psraw(auVar328,4);
        psVar1 = (short *)(puVar284 + iVar278 * 2 + 0x280);
        *psVar1 = sVar303;
        psVar1[1] = sVar312;
        psVar1[2] = sVar315;
        psVar1[3] = sVar319;
        psVar1[4] = sVar321;
        psVar1[5] = sVar322;
        psVar1[6] = sVar323;
        psVar1[7] = sVar324;
        sVar318 = auVar328._0_2_;
        sVar327 = auVar328._2_2_;
        sVar333 = auVar328._4_2_;
        sVar334 = auVar328._6_2_;
        sVar336 = auVar328._8_2_;
        sVar337 = auVar328._10_2_;
        sVar338 = auVar328._12_2_;
        sVar339 = auVar328._14_2_;
        auVar304._0_2_ = sVar303 + _DAT_6709a870;
        auVar304._2_2_ = sVar312 + sRam6709a872;
        auVar304._4_2_ = sVar315 + sRam6709a874;
        auVar304._6_2_ = sVar319 + sRam6709a876;
        auVar304._8_2_ = sVar321 + sRam6709a878;
        auVar304._10_2_ = sVar322 + sRam6709a87a;
        auVar304._12_2_ = sVar323 + sRam6709a87c;
        auVar304._14_2_ = sVar324 + sRam6709a87e;
        *(ulonglong *)((int)puVar282 + iVar278) =
             CONCAT17((0 < sVar339) * (sVar339 < 0x100) * auVar328[0xe] - (0xff < sVar339),
                      CONCAT16((0 < sVar338) * (sVar338 < 0x100) * auVar328[0xc] - (0xff < sVar338),
                               CONCAT15((0 < sVar337) * (sVar337 < 0x100) * auVar328[10] -
                                        (0xff < sVar337),
                                        CONCAT14((0 < sVar336) * (sVar336 < 0x100) * auVar328[8] -
                                                 (0xff < sVar336),
                                                 CONCAT13((0 < sVar334) * (sVar334 < 0x100) *
                                                          auVar328[6] - (0xff < sVar334),
                                                          CONCAT12((0 < sVar333) * (sVar333 < 0x100)
                                                                   * auVar328[4] - (0xff < sVar333),
                                                                   CONCAT11((0 < sVar327) *
                                                                            (sVar327 < 0x100) *
                                                                            auVar328[2] -
                                                                            (0xff < sVar327),
                                                                            (0 < sVar318) *
                                                                            (sVar318 < 0x100) *
                                                                            auVar328[0] -
                                                                            (0xff < sVar318))))))));
        auVar304 = psraw(auVar304,4);
        sVar318 = auVar304._0_2_;
        sVar327 = auVar304._2_2_;
        sVar333 = auVar304._4_2_;
        sVar334 = auVar304._6_2_;
        sVar336 = auVar304._8_2_;
        sVar337 = auVar304._10_2_;
        sVar338 = auVar304._12_2_;
        sVar339 = auVar304._14_2_;
        *(ulonglong *)((int)puVar282 + iVar278 + 0x100) =
             CONCAT17((0 < sVar339) * (sVar339 < 0x100) * auVar304[0xe] - (0xff < sVar339),
                      CONCAT16((0 < sVar338) * (sVar338 < 0x100) * auVar304[0xc] - (0xff < sVar338),
                               CONCAT15((0 < sVar337) * (sVar337 < 0x100) * auVar304[10] -
                                        (0xff < sVar337),
                                        CONCAT14((0 < sVar336) * (sVar336 < 0x100) * auVar304[8] -
                                                 (0xff < sVar336),
                                                 CONCAT13((0 < sVar334) * (sVar334 < 0x100) *
                                                          auVar304[6] - (0xff < sVar334),
                                                          CONCAT12((0 < sVar333) * (sVar333 < 0x100)
                                                                   * auVar304[4] - (0xff < sVar333),
                                                                   CONCAT11((0 < sVar327) *
                                                                            (sVar327 < 0x100) *
                                                                            auVar304[2] -
                                                                            (0xff < sVar327),
                                                                            (0 < sVar318) *
                                                                            (sVar318 < 0x100) *
                                                                            auVar304[0] -
                                                                            (0xff < sVar318))))))));
        bVar8 = 7 < iVar278;
        iVar278 = iVar278 + -8;
      } while (bVar8);
      iVar280 = iVar280 + param_3;
      puVar282 = puVar282 + 2;
      puVar284 = puVar284 + 0x20;
      iVar277 = iVar277 + -1;
      iVar278 = local_24;
    } while (iVar277 != 0);
    iVar278 = (*(code *)param_7)(param_3);
    iVar277 = (*(code *)param_7)(param_3);
    if ((iVar277 < *param_4) || (iVar278 < *param_4)) {
      if (iVar277 < iVar278) {
        *param_4 = iVar277;
        *param_5 = *param_5 + -1;
        iVar277 = (param_2 - param_3) + -2;
        puVar284 = local_290;
        uVar285 = 3;
        iVar278 = local_24;
        while( true ) {
          do {
            auVar304 = *(undefined1 (*) [16])(iVar277 + iVar278);
            uVar317 = auVar304[8];
            auVar43[0xd] = 0;
            auVar43._0_13_ = auVar304._1_13_;
            auVar43[0xe] = uVar317;
            uVar316 = auVar304[7];
            auVar67[0xc] = uVar316;
            auVar67._0_12_ = auVar304._1_12_;
            auVar67._13_2_ = auVar43._13_2_;
            auVar91[0xb] = 0;
            auVar91._0_11_ = auVar304._1_11_;
            auVar91._12_3_ = auVar67._12_3_;
            uVar314 = auVar304[6];
            auVar115[10] = uVar314;
            auVar115._0_10_ = auVar304._1_10_;
            auVar115._11_4_ = auVar91._11_4_;
            auVar139[9] = 0;
            auVar139._0_9_ = auVar304._1_9_;
            auVar139._10_5_ = auVar115._10_5_;
            uVar313 = auVar304[5];
            auVar152[8] = uVar313;
            auVar152._0_8_ = auVar304._1_8_;
            auVar152._9_6_ = auVar139._9_6_;
            auVar207._7_8_ = 0;
            auVar207._0_7_ = auVar152._8_7_;
            uVar310 = auVar304[4];
            Var170 = CONCAT81(SUB158(auVar207 << 0x40,7),uVar310);
            auVar257._9_6_ = 0;
            auVar257._0_9_ = Var170;
            bVar311 = auVar304[3];
            auVar208._1_10_ = SUB1510(auVar257 << 0x30,5);
            auVar208[0] = bVar311;
            auVar258._11_4_ = 0;
            auVar258._0_11_ = auVar208;
            auVar209._1_12_ = SUB1512(auVar258 << 0x20,3);
            auVar209[0] = auVar304[2];
            auVar20[0xd] = 0;
            auVar20._0_13_ = auVar304._2_13_;
            auVar20[0xe] = auVar304[9];
            auVar44[0xc] = uVar317;
            auVar44._0_12_ = auVar304._2_12_;
            auVar44._13_2_ = auVar20._13_2_;
            auVar68[0xb] = 0;
            auVar68._0_11_ = auVar304._2_11_;
            auVar68._12_3_ = auVar44._12_3_;
            auVar92[10] = uVar316;
            auVar92._0_10_ = auVar304._2_10_;
            auVar92._11_4_ = auVar68._11_4_;
            auVar116[9] = 0;
            auVar116._0_9_ = auVar304._2_9_;
            auVar116._10_5_ = auVar92._10_5_;
            auVar140[8] = uVar314;
            auVar140._0_8_ = auVar304._2_8_;
            auVar140._9_6_ = auVar116._9_6_;
            auVar210._7_8_ = 0;
            auVar210._0_7_ = auVar140._8_7_;
            Var174 = CONCAT81(SUB158(auVar210 << 0x40,7),uVar313);
            auVar259._9_6_ = 0;
            auVar259._0_9_ = Var174;
            auVar211._1_10_ = SUB1510(auVar259 << 0x30,5);
            auVar211[0] = uVar310;
            auVar260._11_4_ = 0;
            auVar260._0_11_ = auVar211;
            auVar161[2] = bVar311;
            auVar161._0_2_ = auVar304._2_2_;
            auVar161._3_12_ = SUB1512(auVar260 << 0x20,3);
            auVar21[0xd] = 0;
            auVar21._0_13_ = auVar304._3_13_;
            auVar21[0xe] = auVar304[10];
            auVar45[0xc] = auVar304[9];
            auVar45._0_12_ = auVar304._3_12_;
            auVar45._13_2_ = auVar21._13_2_;
            auVar69[0xb] = 0;
            auVar69._0_11_ = auVar304._3_11_;
            auVar69._12_3_ = auVar45._12_3_;
            auVar93[10] = uVar317;
            auVar93._0_10_ = auVar304._3_10_;
            auVar93._11_4_ = auVar69._11_4_;
            auVar117[9] = 0;
            auVar117._0_9_ = auVar304._3_9_;
            auVar117._10_5_ = auVar93._10_5_;
            auVar141[8] = uVar316;
            auVar141._0_8_ = auVar304._3_8_;
            auVar141._9_6_ = auVar117._9_6_;
            auVar212._7_8_ = 0;
            auVar212._0_7_ = auVar141._8_7_;
            Var177 = CONCAT81(SUB158(auVar212 << 0x40,7),uVar314);
            auVar261._9_6_ = 0;
            auVar261._0_9_ = Var177;
            auVar213._1_10_ = SUB1510(auVar261 << 0x30,5);
            auVar213[0] = uVar313;
            auVar262._11_4_ = 0;
            auVar262._0_11_ = auVar213;
            auVar214._1_12_ = SUB1512(auVar262 << 0x20,3);
            auVar214[0] = uVar310;
            auVar22[0xd] = 0;
            auVar22._0_13_ = auVar304._0_13_;
            auVar22[0xe] = uVar316;
            auVar46[0xc] = uVar314;
            auVar46._0_12_ = auVar304._0_12_;
            auVar46._13_2_ = auVar22._13_2_;
            auVar70[0xb] = 0;
            auVar70._0_11_ = auVar304._0_11_;
            auVar70._12_3_ = auVar46._12_3_;
            auVar94[10] = uVar313;
            auVar94._0_10_ = auVar304._0_10_;
            auVar94._11_4_ = auVar70._11_4_;
            auVar118[9] = 0;
            auVar118._0_9_ = auVar304._0_9_;
            auVar118._10_5_ = auVar94._10_5_;
            auVar142[8] = uVar310;
            auVar142._0_8_ = auVar304._0_8_;
            auVar142._9_6_ = auVar118._9_6_;
            auVar215._7_8_ = 0;
            auVar215._0_7_ = auVar142._8_7_;
            Var181 = CONCAT81(SUB158(auVar215 << 0x40,7),bVar311);
            auVar263._9_6_ = 0;
            auVar263._0_9_ = Var181;
            auVar216._1_10_ = SUB1510(auVar263 << 0x30,5);
            auVar216[0] = auVar304[2];
            auVar264._11_4_ = 0;
            auVar264._0_11_ = auVar216;
            auVar162[2] = auVar304[1];
            auVar162._0_2_ = auVar304._0_2_;
            auVar162._3_12_ = SUB1512(auVar264 << 0x20,3);
            psVar1 = (short *)(puVar284 + iVar278 * 2);
            *psVar1 = (((ushort)auVar304[1] * _DAT_6709a840 +
                       (auVar304._2_2_ & 0xff) * _DAT_6709a840 * 2) - (auVar304._0_2_ & 0xff)) -
                      (ushort)bVar311;
            psVar1[1] = ((auVar209._0_2_ * sRam6709a842 + auVar161._2_2_ * sRam6709a842 * 2) -
                        auVar162._2_2_) - auVar214._0_2_;
            psVar1[2] = ((auVar208._0_2_ * sRam6709a844 + auVar211._0_2_ * sRam6709a844 * 2) -
                        auVar216._0_2_) - auVar213._0_2_;
            psVar1[3] = (((short)Var170 * sRam6709a846 + (short)Var174 * sRam6709a846 * 2) -
                        (short)Var181) - (short)Var177;
            psVar1[4] = ((auVar152._8_2_ * sRam6709a848 + auVar140._8_2_ * sRam6709a848 * 2) -
                        auVar142._8_2_) - auVar141._8_2_;
            psVar1[5] = ((auVar115._10_2_ * sRam6709a84a + auVar92._10_2_ * sRam6709a84a * 2) -
                        auVar94._10_2_) - auVar93._10_2_;
            psVar1[6] = ((auVar67._12_2_ * sRam6709a84c + auVar44._12_2_ * sRam6709a84c * 2) -
                        auVar46._12_2_) - auVar45._12_2_;
            psVar1[7] = (((auVar43._13_2_ >> 8) * sRam6709a84e +
                         (auVar20._13_2_ >> 8) * sRam6709a84e * 2) - (auVar22._13_2_ >> 8)) -
                        (auVar21._13_2_ >> 8);
            bVar8 = 7 < iVar278;
            iVar278 = iVar278 + -8;
          } while (bVar8);
          iVar277 = iVar277 + param_3;
          puVar284 = puVar284 + 0x20;
          uVar285 = uVar285 - 1;
          if (uVar285 == 0) break;
          iVar278 = local_24;
          if ((uVar285 & 1) == 0) {
            iVar277 = iVar277 + param_6 * param_3;
            puVar284 = puVar284 + param_6 * 0x20;
          }
        }
        puVar284 = local_290;
        iVar278 = local_24;
        iVar277 = param_6;
        do {
          do {
            psVar1 = (short *)(puVar284 + iVar278 * 2 + 0x20);
            auVar332._0_2_ = *psVar1 * _DAT_6709a840;
            auVar332._2_2_ = psVar1[1] * sRam6709a842;
            auVar332._4_2_ = psVar1[2] * sRam6709a844;
            auVar332._6_2_ = psVar1[3] * sRam6709a846;
            auVar332._8_2_ = psVar1[4] * sRam6709a848;
            auVar332._10_2_ = psVar1[5] * sRam6709a84a;
            auVar332._12_2_ = psVar1[6] * sRam6709a84c;
            auVar332._14_2_ = psVar1[7] * sRam6709a84e;
            psVar1 = (short *)(puVar284 + iVar278 * 2 + 0x40);
            auVar326._0_2_ = *psVar1 * _DAT_6709a840;
            auVar326._2_2_ = psVar1[1] * sRam6709a842;
            auVar326._4_2_ = psVar1[2] * sRam6709a844;
            auVar326._6_2_ = psVar1[3] * sRam6709a846;
            auVar326._8_2_ = psVar1[4] * sRam6709a848;
            auVar326._10_2_ = psVar1[5] * sRam6709a84a;
            auVar326._12_2_ = psVar1[6] * sRam6709a84c;
            auVar326._14_2_ = psVar1[7] * sRam6709a84e;
            psVar1 = (short *)(puVar284 + iVar278 * 2);
            psVar2 = (short *)(puVar284 + iVar278 * 2 + 0x60);
            auVar331._0_2_ = *psVar1 + *psVar2;
            auVar331._2_2_ = psVar1[1] + psVar2[1];
            auVar331._4_2_ = psVar1[2] + psVar2[2];
            auVar331._6_2_ = psVar1[3] + psVar2[3];
            auVar331._8_2_ = psVar1[4] + psVar2[4];
            auVar331._10_2_ = psVar1[5] + psVar2[5];
            auVar331._12_2_ = psVar1[6] + psVar2[6];
            auVar331._14_2_ = psVar1[7] + psVar2[7];
            auVar328 = psraw(auVar332,1);
            auVar304 = psubsw(auVar326,auVar331);
            auVar304 = psraw(auVar304,2);
            auVar304 = paddsw(auVar304,auVar328);
            auVar304 = paddsw(auVar304,_DAT_6709a860);
            auVar304 = psraw(auVar304,6);
            sVar318 = auVar304._0_2_;
            sVar327 = auVar304._2_2_;
            sVar333 = auVar304._4_2_;
            sVar334 = auVar304._6_2_;
            sVar336 = auVar304._8_2_;
            sVar337 = auVar304._10_2_;
            sVar338 = auVar304._12_2_;
            sVar339 = auVar304._14_2_;
            *(ulonglong *)((int)puVar283 + iVar278) =
                 CONCAT17((0 < sVar339) * (sVar339 < 0x100) * auVar304[0xe] - (0xff < sVar339),
                          CONCAT16((0 < sVar338) * (sVar338 < 0x100) * auVar304[0xc] -
                                   (0xff < sVar338),
                                   CONCAT15((0 < sVar337) * (sVar337 < 0x100) * auVar304[10] -
                                            (0xff < sVar337),
                                            CONCAT14((0 < sVar336) * (sVar336 < 0x100) * auVar304[8]
                                                     - (0xff < sVar336),
                                                     CONCAT13((0 < sVar334) * (sVar334 < 0x100) *
                                                              auVar304[6] - (0xff < sVar334),
                                                              CONCAT12((0 < sVar333) *
                                                                       (sVar333 < 0x100) *
                                                                       auVar304[4] -
                                                                       (0xff < sVar333),
                                                                       CONCAT11((0 < sVar327) *
                                                                                (sVar327 < 0x100) *
                                                                                auVar304[2] -
                                                                                (0xff < sVar327),
                                                                                (0 < sVar318) *
                                                                                (sVar318 < 0x100) *
                                                                                auVar304[0] -
                                                                                (0xff < sVar318)))))
                                           )));
            bVar8 = 7 < iVar278;
            iVar278 = iVar278 + -8;
          } while (bVar8);
          puVar284 = puVar284 + 0x20;
          puVar283 = puVar283 + 2;
          iVar277 = iVar277 + -1;
          iVar278 = local_24;
        } while (iVar277 != 0);
        iVar277 = (param_2 - param_3) + -1;
        iVar280 = 2;
        puVar284 = local_2b0;
        do {
          do {
            puVar279 = puVar284;
            auVar304 = *(undefined1 (*) [16])(iVar277 + iVar278);
            auVar23[0xd] = 0;
            auVar23._0_13_ = auVar304._1_13_;
            auVar23[0xe] = auVar304[8];
            uVar317 = auVar304[7];
            auVar47[0xc] = uVar317;
            auVar47._0_12_ = auVar304._1_12_;
            auVar47._13_2_ = auVar23._13_2_;
            auVar71[0xb] = 0;
            auVar71._0_11_ = auVar304._1_11_;
            auVar71._12_3_ = auVar47._12_3_;
            uVar316 = auVar304[6];
            auVar95[10] = uVar316;
            auVar95._0_10_ = auVar304._1_10_;
            auVar95._11_4_ = auVar71._11_4_;
            auVar119[9] = 0;
            auVar119._0_9_ = auVar304._1_9_;
            auVar119._10_5_ = auVar95._10_5_;
            uVar314 = auVar304[5];
            auVar143[8] = uVar314;
            auVar143._0_8_ = auVar304._1_8_;
            auVar143._9_6_ = auVar119._9_6_;
            auVar217._7_8_ = 0;
            auVar217._0_7_ = auVar143._8_7_;
            uVar313 = auVar304[4];
            Var170 = CONCAT81(SUB158(auVar217 << 0x40,7),uVar313);
            auVar265._9_6_ = 0;
            auVar265._0_9_ = Var170;
            uVar310 = auVar304[3];
            auVar218._1_10_ = SUB1510(auVar265 << 0x30,5);
            auVar218[0] = uVar310;
            auVar266._11_4_ = 0;
            auVar266._0_11_ = auVar218;
            auVar163[2] = auVar304[2];
            auVar163._0_2_ = auVar304._1_2_;
            auVar163._3_12_ = SUB1512(auVar266 << 0x20,3);
            auVar307._0_2_ = (auVar304._1_2_ & 0xff) * _DAT_6709a840;
            auVar307._2_2_ = auVar163._2_2_ * sRam6709a842;
            auVar307._4_2_ = auVar218._0_2_ * sRam6709a844;
            auVar307._6_2_ = (short)Var170 * sRam6709a846;
            auVar307._8_2_ = auVar143._8_2_ * sRam6709a848;
            auVar307._10_2_ = auVar95._10_2_ * sRam6709a84a;
            auVar307._12_2_ = auVar47._12_2_ * sRam6709a84c;
            auVar307._14_2_ = (auVar23._13_2_ >> 8) * sRam6709a84e;
            auVar24[0xd] = 0;
            auVar24._0_13_ = auVar304._0_13_;
            auVar24[0xe] = uVar317;
            auVar48[0xc] = uVar316;
            auVar48._0_12_ = auVar304._0_12_;
            auVar48._13_2_ = auVar24._13_2_;
            auVar72[0xb] = 0;
            auVar72._0_11_ = auVar304._0_11_;
            auVar72._12_3_ = auVar48._12_3_;
            auVar96[10] = uVar314;
            auVar96._0_10_ = auVar304._0_10_;
            auVar96._11_4_ = auVar72._11_4_;
            auVar120[9] = 0;
            auVar120._0_9_ = auVar304._0_9_;
            auVar120._10_5_ = auVar96._10_5_;
            auVar144[8] = uVar313;
            auVar144._0_8_ = auVar304._0_8_;
            auVar144._9_6_ = auVar120._9_6_;
            auVar219._7_8_ = 0;
            auVar219._0_7_ = auVar144._8_7_;
            Var170 = CONCAT81(SUB158(auVar219 << 0x40,7),uVar310);
            auVar267._9_6_ = 0;
            auVar267._0_9_ = Var170;
            auVar220._1_10_ = SUB1510(auVar267 << 0x30,5);
            auVar220[0] = auVar304[2];
            auVar268._11_4_ = 0;
            auVar268._0_11_ = auVar220;
            auVar164[2] = auVar304[1];
            auVar164._0_2_ = auVar304._0_2_;
            auVar164._3_12_ = SUB1512(auVar268 << 0x20,3);
            auVar25[0xd] = 0;
            auVar25._0_13_ = auVar304._2_13_;
            auVar25[0xe] = auVar304[9];
            auVar49[0xc] = auVar304[8];
            auVar49._0_12_ = auVar304._2_12_;
            auVar49._13_2_ = auVar25._13_2_;
            auVar73[0xb] = 0;
            auVar73._0_11_ = auVar304._2_11_;
            auVar73._12_3_ = auVar49._12_3_;
            auVar97[10] = uVar317;
            auVar97._0_10_ = auVar304._2_10_;
            auVar97._11_4_ = auVar73._11_4_;
            auVar121[9] = 0;
            auVar121._0_9_ = auVar304._2_9_;
            auVar121._10_5_ = auVar97._10_5_;
            auVar145[8] = uVar316;
            auVar145._0_8_ = auVar304._2_8_;
            auVar145._9_6_ = auVar121._9_6_;
            auVar221._7_8_ = 0;
            auVar221._0_7_ = auVar145._8_7_;
            Var174 = CONCAT81(SUB158(auVar221 << 0x40,7),uVar314);
            auVar269._9_6_ = 0;
            auVar269._0_9_ = Var174;
            auVar222._1_10_ = SUB1510(auVar269 << 0x30,5);
            auVar222[0] = uVar313;
            auVar270._11_4_ = 0;
            auVar270._0_11_ = auVar222;
            auVar165[2] = uVar310;
            auVar165._0_2_ = auVar304._2_2_;
            auVar165._3_12_ = SUB1512(auVar270 << 0x20,3);
            auVar328 = psraw(auVar307,1);
            psVar1 = (short *)(puVar279 + iVar278 * 2);
            *psVar1 = (auVar304._0_2_ & 0xff) * _DAT_6709a840 + auVar307._0_2_ +
                      (auVar304._2_2_ & 0xff) + auVar328._0_2_;
            psVar1[1] = auVar164._2_2_ * sRam6709a842 + auVar307._2_2_ + auVar165._2_2_ +
                        auVar328._2_2_;
            psVar1[2] = auVar220._0_2_ * sRam6709a844 + auVar307._4_2_ + auVar222._0_2_ +
                        auVar328._4_2_;
            psVar1[3] = (short)Var170 * sRam6709a846 + auVar307._6_2_ + (short)Var174 +
                        auVar328._6_2_;
            psVar1[4] = auVar144._8_2_ * sRam6709a848 + auVar307._8_2_ + auVar145._8_2_ +
                        auVar328._8_2_;
            psVar1[5] = auVar96._10_2_ * sRam6709a84a + auVar307._10_2_ + auVar97._10_2_ +
                        auVar328._10_2_;
            psVar1[6] = auVar48._12_2_ * sRam6709a84c + auVar307._12_2_ + auVar49._12_2_ +
                        auVar328._12_2_;
            psVar1[7] = (auVar24._13_2_ >> 8) * sRam6709a84e + auVar307._14_2_ +
                        (auVar25._13_2_ >> 8) + auVar328._14_2_;
            bVar8 = 7 < iVar278;
            iVar278 = iVar278 + -8;
            puVar284 = puVar279;
          } while (bVar8);
          iVar277 = iVar277 + param_3;
          iVar280 = iVar280 + -1;
          iVar278 = local_24;
          puVar284 = puVar279 + 0x20;
        } while (iVar280 != 0);
        puVar282 = local_630;
        do {
          do {
            auVar304 = *(undefined1 (*) [16])(iVar277 + iVar278);
            auVar26[0xd] = 0;
            auVar26._0_13_ = auVar304._1_13_;
            auVar26[0xe] = auVar304[8];
            uVar317 = auVar304[7];
            auVar50[0xc] = uVar317;
            auVar50._0_12_ = auVar304._1_12_;
            auVar50._13_2_ = auVar26._13_2_;
            auVar74[0xb] = 0;
            auVar74._0_11_ = auVar304._1_11_;
            auVar74._12_3_ = auVar50._12_3_;
            uVar316 = auVar304[6];
            auVar98[10] = uVar316;
            auVar98._0_10_ = auVar304._1_10_;
            auVar98._11_4_ = auVar74._11_4_;
            auVar122[9] = 0;
            auVar122._0_9_ = auVar304._1_9_;
            auVar122._10_5_ = auVar98._10_5_;
            uVar314 = auVar304[5];
            auVar146[8] = uVar314;
            auVar146._0_8_ = auVar304._1_8_;
            auVar146._9_6_ = auVar122._9_6_;
            auVar223._7_8_ = 0;
            auVar223._0_7_ = auVar146._8_7_;
            uVar313 = auVar304[4];
            Var170 = CONCAT81(SUB158(auVar223 << 0x40,7),uVar313);
            auVar271._9_6_ = 0;
            auVar271._0_9_ = Var170;
            uVar310 = auVar304[3];
            auVar224._1_10_ = SUB1510(auVar271 << 0x30,5);
            auVar224[0] = uVar310;
            auVar272._11_4_ = 0;
            auVar272._0_11_ = auVar224;
            auVar166[2] = auVar304[2];
            auVar166._0_2_ = auVar304._1_2_;
            auVar166._3_12_ = SUB1512(auVar272 << 0x20,3);
            auVar308._0_2_ = auVar304._1_2_ & 0xff;
            auVar308._2_13_ = auVar166._2_13_;
            auVar308[0xf] = 0;
            auVar331 = psllw(auVar308,3);
            auVar328 = *(undefined1 (*) [16])(puVar279 + iVar278 * 2);
            auVar27[0xd] = 0;
            auVar27._0_13_ = auVar304._0_13_;
            auVar27[0xe] = uVar317;
            auVar51[0xc] = uVar316;
            auVar51._0_12_ = auVar304._0_12_;
            auVar51._13_2_ = auVar27._13_2_;
            auVar75[0xb] = 0;
            auVar75._0_11_ = auVar304._0_11_;
            auVar75._12_3_ = auVar51._12_3_;
            auVar99[10] = uVar314;
            auVar99._0_10_ = auVar304._0_10_;
            auVar99._11_4_ = auVar75._11_4_;
            auVar123[9] = 0;
            auVar123._0_9_ = auVar304._0_9_;
            auVar123._10_5_ = auVar99._10_5_;
            auVar147[8] = uVar313;
            auVar147._0_8_ = auVar304._0_8_;
            auVar147._9_6_ = auVar123._9_6_;
            auVar225._7_8_ = 0;
            auVar225._0_7_ = auVar147._8_7_;
            Var174 = CONCAT81(SUB158(auVar225 << 0x40,7),uVar310);
            auVar273._9_6_ = 0;
            auVar273._0_9_ = Var174;
            auVar226._1_10_ = SUB1510(auVar273 << 0x30,5);
            auVar226[0] = auVar304[2];
            auVar274._11_4_ = 0;
            auVar274._0_11_ = auVar226;
            auVar167[2] = auVar304[1];
            auVar167._0_2_ = auVar304._0_2_;
            auVar167._3_12_ = SUB1512(auVar274 << 0x20,3);
            auVar28[0xd] = 0;
            auVar28._0_13_ = auVar304._2_13_;
            auVar28[0xe] = auVar304[9];
            auVar52[0xc] = auVar304[8];
            auVar52._0_12_ = auVar304._2_12_;
            auVar52._13_2_ = auVar28._13_2_;
            auVar76[0xb] = 0;
            auVar76._0_11_ = auVar304._2_11_;
            auVar76._12_3_ = auVar52._12_3_;
            auVar100[10] = uVar317;
            auVar100._0_10_ = auVar304._2_10_;
            auVar100._11_4_ = auVar76._11_4_;
            auVar124[9] = 0;
            auVar124._0_9_ = auVar304._2_9_;
            auVar124._10_5_ = auVar100._10_5_;
            auVar148[8] = uVar316;
            auVar148._0_8_ = auVar304._2_8_;
            auVar148._9_6_ = auVar124._9_6_;
            auVar227._7_8_ = 0;
            auVar227._0_7_ = auVar148._8_7_;
            Var177 = CONCAT81(SUB158(auVar227 << 0x40,7),uVar314);
            auVar275._9_6_ = 0;
            auVar275._0_9_ = Var177;
            auVar228._1_10_ = SUB1510(auVar275 << 0x30,5);
            auVar228[0] = uVar313;
            auVar276._11_4_ = 0;
            auVar276._0_11_ = auVar228;
            auVar168[2] = uVar310;
            auVar168._0_2_ = auVar304._2_2_;
            auVar168._3_12_ = SUB1512(auVar276 << 0x20,3);
            sVar303 = (auVar304._0_2_ & 0xff) * _DAT_6709a840 + auVar331._0_2_ + auVar308._0_2_ +
                      (auVar304._2_2_ & 0xff);
            sVar312 = auVar167._2_2_ * sRam6709a842 + auVar331._2_2_ + auVar166._2_2_ +
                      auVar168._2_2_;
            sVar315 = auVar226._0_2_ * sRam6709a844 + auVar331._4_2_ + auVar224._0_2_ +
                      auVar228._0_2_;
            sVar319 = (short)Var174 * sRam6709a846 + auVar331._6_2_ + (short)Var170 + (short)Var177;
            sVar321 = auVar147._8_2_ * sRam6709a848 + auVar331._8_2_ + auVar146._8_2_ +
                      auVar148._8_2_;
            sVar322 = auVar99._10_2_ * sRam6709a84a + auVar331._10_2_ + auVar98._10_2_ +
                      auVar100._10_2_;
            sVar323 = auVar51._12_2_ * sRam6709a84c + auVar331._12_2_ + auVar50._12_2_ +
                      auVar52._12_2_;
            sVar324 = (auVar27._13_2_ >> 8) * sRam6709a84e + auVar331._14_2_ + (auVar26._13_2_ >> 8)
                      + (auVar28._13_2_ >> 8);
            psVar1 = (short *)(puVar279 + iVar278 * 2 + -0x20);
            sVar318 = *psVar1;
            sVar327 = psVar1[1];
            sVar333 = psVar1[2];
            sVar334 = psVar1[3];
            sVar336 = psVar1[4];
            sVar337 = psVar1[5];
            sVar338 = psVar1[6];
            sVar339 = psVar1[7];
            *(undefined1 (*) [16])(puVar279 + iVar278 * 2 + -0x20) = auVar328;
            auVar304 = psllw(auVar328,3);
            psVar1 = (short *)(puVar279 + iVar278 * 2);
            *psVar1 = sVar303;
            psVar1[1] = sVar312;
            psVar1[2] = sVar315;
            psVar1[3] = sVar319;
            psVar1[4] = sVar321;
            psVar1[5] = sVar322;
            psVar1[6] = sVar323;
            psVar1[7] = sVar324;
            uVar286 = sVar303 + auVar304._0_2_ + auVar328._0_2_ + sVar318 * _DAT_6709a840 +
                      _DAT_6709a850;
            uVar289 = sVar312 + auVar304._2_2_ + auVar328._2_2_ + sVar327 * sRam6709a842 +
                      sRam6709a852;
            uVar291 = sVar315 + auVar304._4_2_ + auVar328._4_2_ + sVar333 * sRam6709a844 +
                      sRam6709a854;
            uVar293 = sVar319 + auVar304._6_2_ + auVar328._6_2_ + sVar334 * sRam6709a846 +
                      sRam6709a856;
            uVar295 = sVar321 + auVar304._8_2_ + auVar328._8_2_ + sVar336 * sRam6709a848 +
                      sRam6709a858;
            uVar297 = sVar322 + auVar304._10_2_ + auVar328._10_2_ + sVar337 * sRam6709a84a +
                      sRam6709a85a;
            uVar299 = sVar323 + auVar304._12_2_ + auVar328._12_2_ + sVar338 * sRam6709a84c +
                      sRam6709a85c;
            uVar301 = sVar324 + auVar304._14_2_ + auVar328._14_2_ + sVar339 * sRam6709a84e +
                      sRam6709a85e;
            uVar287 = uVar286 >> 8;
            uVar290 = uVar289 >> 8;
            uVar292 = uVar291 >> 8;
            uVar294 = uVar293 >> 8;
            uVar296 = uVar295 >> 8;
            uVar298 = uVar297 >> 8;
            uVar300 = uVar299 >> 8;
            uVar302 = uVar301 >> 8;
            *(ulonglong *)((int)puVar282 + iVar278) =
                 CONCAT17((uVar302 != 0) * (uVar302 < 0x100) * (char)(uVar301 >> 8) -
                          (0xff < uVar302),
                          CONCAT16((uVar300 != 0) * (uVar300 < 0x100) * (char)(uVar299 >> 8) -
                                   (0xff < uVar300),
                                   CONCAT15((uVar298 != 0) * (uVar298 < 0x100) *
                                            (char)(uVar297 >> 8) - (0xff < uVar298),
                                            CONCAT14((uVar296 != 0) * (uVar296 < 0x100) *
                                                     (char)(uVar295 >> 8) - (0xff < uVar296),
                                                     CONCAT13((uVar294 != 0) * (uVar294 < 0x100) *
                                                              (char)(uVar293 >> 8) -
                                                              (0xff < uVar294),
                                                              CONCAT12((uVar292 != 0) *
                                                                       (uVar292 < 0x100) *
                                                                       (char)(uVar291 >> 8) -
                                                                       (0xff < uVar292),
                                                                       CONCAT11((uVar290 != 0) *
                                                                                (uVar290 < 0x100) *
                                                                                (char)(uVar289 >> 8)
                                                                                - (0xff < uVar290),
                                                                                (uVar287 != 0) *
                                                                                (uVar287 < 0x100) *
                                                                                (char)(uVar286 >> 8)
                                                                                - (0xff < uVar287)))
                                                             )))));
            bVar8 = 7 < iVar278;
            iVar278 = iVar278 + -8;
          } while (bVar8);
          iVar277 = iVar277 + param_3;
          puVar282 = puVar282 + 2;
          param_6 = param_6 + -1;
          iVar278 = local_24;
        } while (param_6 != 0);
      }
      else {
        *param_4 = iVar278;
        *param_5 = *param_5 + '\x01';
        iVar277 = param_2 + param_3 * -2 + -1;
        puVar284 = local_530;
        uVar285 = 4;
        iVar278 = local_24;
        while( true ) {
          do {
            auVar304 = *(undefined1 (*) [16])(iVar277 + iVar278);
            uVar317 = auVar304[8];
            auVar39[0xd] = 0;
            auVar39._0_13_ = auVar304._1_13_;
            auVar39[0xe] = uVar317;
            uVar316 = auVar304[7];
            auVar63[0xc] = uVar316;
            auVar63._0_12_ = auVar304._1_12_;
            auVar63._13_2_ = auVar39._13_2_;
            auVar87[0xb] = 0;
            auVar87._0_11_ = auVar304._1_11_;
            auVar87._12_3_ = auVar63._12_3_;
            uVar314 = auVar304[6];
            auVar111[10] = uVar314;
            auVar111._0_10_ = auVar304._1_10_;
            auVar111._11_4_ = auVar87._11_4_;
            auVar135[9] = 0;
            auVar135._0_9_ = auVar304._1_9_;
            auVar135._10_5_ = auVar111._10_5_;
            uVar313 = auVar304[5];
            auVar151[8] = uVar313;
            auVar151._0_8_ = auVar304._1_8_;
            auVar151._9_6_ = auVar135._9_6_;
            auVar197._7_8_ = 0;
            auVar197._0_7_ = auVar151._8_7_;
            uVar310 = auVar304[4];
            Var170 = CONCAT81(SUB158(auVar197 << 0x40,7),uVar310);
            auVar249._9_6_ = 0;
            auVar249._0_9_ = Var170;
            bVar311 = auVar304[3];
            auVar198._1_10_ = SUB1510(auVar249 << 0x30,5);
            auVar198[0] = bVar311;
            auVar250._11_4_ = 0;
            auVar250._0_11_ = auVar198;
            auVar199._1_12_ = SUB1512(auVar250 << 0x20,3);
            auVar199[0] = auVar304[2];
            auVar17[0xd] = 0;
            auVar17._0_13_ = auVar304._2_13_;
            auVar17[0xe] = auVar304[9];
            auVar40[0xc] = uVar317;
            auVar40._0_12_ = auVar304._2_12_;
            auVar40._13_2_ = auVar17._13_2_;
            auVar64[0xb] = 0;
            auVar64._0_11_ = auVar304._2_11_;
            auVar64._12_3_ = auVar40._12_3_;
            auVar88[10] = uVar316;
            auVar88._0_10_ = auVar304._2_10_;
            auVar88._11_4_ = auVar64._11_4_;
            auVar112[9] = 0;
            auVar112._0_9_ = auVar304._2_9_;
            auVar112._10_5_ = auVar88._10_5_;
            auVar136[8] = uVar314;
            auVar136._0_8_ = auVar304._2_8_;
            auVar136._9_6_ = auVar112._9_6_;
            auVar200._7_8_ = 0;
            auVar200._0_7_ = auVar136._8_7_;
            Var174 = CONCAT81(SUB158(auVar200 << 0x40,7),uVar313);
            auVar251._9_6_ = 0;
            auVar251._0_9_ = Var174;
            auVar201._1_10_ = SUB1510(auVar251 << 0x30,5);
            auVar201[0] = uVar310;
            auVar252._11_4_ = 0;
            auVar252._0_11_ = auVar201;
            auVar159[2] = bVar311;
            auVar159._0_2_ = auVar304._2_2_;
            auVar159._3_12_ = SUB1512(auVar252 << 0x20,3);
            auVar18[0xd] = 0;
            auVar18._0_13_ = auVar304._3_13_;
            auVar18[0xe] = auVar304[10];
            auVar41[0xc] = auVar304[9];
            auVar41._0_12_ = auVar304._3_12_;
            auVar41._13_2_ = auVar18._13_2_;
            auVar65[0xb] = 0;
            auVar65._0_11_ = auVar304._3_11_;
            auVar65._12_3_ = auVar41._12_3_;
            auVar89[10] = uVar317;
            auVar89._0_10_ = auVar304._3_10_;
            auVar89._11_4_ = auVar65._11_4_;
            auVar113[9] = 0;
            auVar113._0_9_ = auVar304._3_9_;
            auVar113._10_5_ = auVar89._10_5_;
            auVar137[8] = uVar316;
            auVar137._0_8_ = auVar304._3_8_;
            auVar137._9_6_ = auVar113._9_6_;
            auVar202._7_8_ = 0;
            auVar202._0_7_ = auVar137._8_7_;
            Var177 = CONCAT81(SUB158(auVar202 << 0x40,7),uVar314);
            auVar253._9_6_ = 0;
            auVar253._0_9_ = Var177;
            auVar203._1_10_ = SUB1510(auVar253 << 0x30,5);
            auVar203[0] = uVar313;
            auVar254._11_4_ = 0;
            auVar254._0_11_ = auVar203;
            auVar204._1_12_ = SUB1512(auVar254 << 0x20,3);
            auVar204[0] = uVar310;
            auVar19[0xd] = 0;
            auVar19._0_13_ = auVar304._0_13_;
            auVar19[0xe] = uVar316;
            auVar42[0xc] = uVar314;
            auVar42._0_12_ = auVar304._0_12_;
            auVar42._13_2_ = auVar19._13_2_;
            auVar66[0xb] = 0;
            auVar66._0_11_ = auVar304._0_11_;
            auVar66._12_3_ = auVar42._12_3_;
            auVar90[10] = uVar313;
            auVar90._0_10_ = auVar304._0_10_;
            auVar90._11_4_ = auVar66._11_4_;
            auVar114[9] = 0;
            auVar114._0_9_ = auVar304._0_9_;
            auVar114._10_5_ = auVar90._10_5_;
            auVar138[8] = uVar310;
            auVar138._0_8_ = auVar304._0_8_;
            auVar138._9_6_ = auVar114._9_6_;
            auVar205._7_8_ = 0;
            auVar205._0_7_ = auVar138._8_7_;
            Var181 = CONCAT81(SUB158(auVar205 << 0x40,7),bVar311);
            auVar255._9_6_ = 0;
            auVar255._0_9_ = Var181;
            auVar206._1_10_ = SUB1510(auVar255 << 0x30,5);
            auVar206[0] = auVar304[2];
            auVar256._11_4_ = 0;
            auVar256._0_11_ = auVar206;
            auVar160[2] = auVar304[1];
            auVar160._0_2_ = auVar304._0_2_;
            auVar160._3_12_ = SUB1512(auVar256 << 0x20,3);
            psVar1 = (short *)(puVar284 + iVar278 * 2);
            *psVar1 = (((auVar304._2_2_ & 0xff) * _DAT_6709a840 +
                       (ushort)auVar304[1] * _DAT_6709a840 * 2) - (auVar304._0_2_ & 0xff)) -
                      (ushort)bVar311;
            psVar1[1] = ((auVar159._2_2_ * sRam6709a842 + auVar199._0_2_ * sRam6709a842 * 2) -
                        auVar160._2_2_) - auVar204._0_2_;
            psVar1[2] = ((auVar201._0_2_ * sRam6709a844 + auVar198._0_2_ * sRam6709a844 * 2) -
                        auVar206._0_2_) - auVar203._0_2_;
            psVar1[3] = (((short)Var174 * sRam6709a846 + (short)Var170 * sRam6709a846 * 2) -
                        (short)Var181) - (short)Var177;
            psVar1[4] = ((auVar136._8_2_ * sRam6709a848 + auVar151._8_2_ * sRam6709a848 * 2) -
                        auVar138._8_2_) - auVar137._8_2_;
            psVar1[5] = ((auVar88._10_2_ * sRam6709a84a + auVar111._10_2_ * sRam6709a84a * 2) -
                        auVar90._10_2_) - auVar89._10_2_;
            psVar1[6] = ((auVar40._12_2_ * sRam6709a84c + auVar63._12_2_ * sRam6709a84c * 2) -
                        auVar42._12_2_) - auVar41._12_2_;
            psVar1[7] = (((auVar17._13_2_ >> 8) * sRam6709a84e +
                         (auVar39._13_2_ >> 8) * sRam6709a84e * 2) - (auVar19._13_2_ >> 8)) -
                        (auVar18._13_2_ >> 8);
            bVar8 = 7 < iVar278;
            iVar278 = iVar278 + -8;
          } while (bVar8);
          iVar277 = iVar277 + param_3;
          puVar284 = puVar284 + 0x20;
          uVar285 = uVar285 - 1;
          if (uVar285 == 0) break;
          iVar278 = local_24;
          if ((uVar285 & 1) == 0) {
            iVar277 = iVar277 + param_6 * param_3;
            puVar284 = puVar284 + param_6 * 0x20;
          }
        }
        puVar282 = local_630;
        puVar284 = local_530;
        iVar278 = local_24;
        do {
          do {
            psVar1 = (short *)(puVar284 + iVar278 * 2 + 0x40);
            auVar325._0_2_ = *psVar1 * _DAT_6709a840;
            auVar325._2_2_ = psVar1[1] * sRam6709a842;
            auVar325._4_2_ = psVar1[2] * sRam6709a844;
            auVar325._6_2_ = psVar1[3] * sRam6709a846;
            auVar325._8_2_ = psVar1[4] * sRam6709a848;
            auVar325._10_2_ = psVar1[5] * sRam6709a84a;
            auVar325._12_2_ = psVar1[6] * sRam6709a84c;
            auVar325._14_2_ = psVar1[7] * sRam6709a84e;
            psVar1 = (short *)(puVar284 + iVar278 * 2);
            psVar2 = (short *)(puVar284 + iVar278 * 2 + 0x60);
            auVar288._0_2_ = *psVar1 + *psVar2;
            auVar288._2_2_ = psVar1[1] + psVar2[1];
            auVar288._4_2_ = psVar1[2] + psVar2[2];
            auVar288._6_2_ = psVar1[3] + psVar2[3];
            auVar288._8_2_ = psVar1[4] + psVar2[4];
            auVar288._10_2_ = psVar1[5] + psVar2[5];
            auVar288._12_2_ = psVar1[6] + psVar2[6];
            auVar288._14_2_ = psVar1[7] + psVar2[7];
            auVar330._0_2_ = *psVar2 * _DAT_6709a840;
            auVar330._2_2_ = psVar2[1] * sRam6709a842;
            auVar330._4_2_ = psVar2[2] * sRam6709a844;
            auVar330._6_2_ = psVar2[3] * sRam6709a846;
            auVar330._8_2_ = psVar2[4] * sRam6709a848;
            auVar330._10_2_ = psVar2[5] * sRam6709a84a;
            auVar330._12_2_ = psVar2[6] * sRam6709a84c;
            auVar330._14_2_ = psVar2[7] * sRam6709a84e;
            psVar2 = (short *)(puVar284 + iVar278 * 2 + 0x80);
            psVar1 = (short *)(puVar284 + iVar278 * 2 + 0x20);
            auVar342._0_2_ = *psVar2 + *psVar1;
            auVar342._2_2_ = psVar2[1] + psVar1[1];
            auVar342._4_2_ = psVar2[2] + psVar1[2];
            auVar342._6_2_ = psVar2[3] + psVar1[3];
            auVar342._8_2_ = psVar2[4] + psVar1[4];
            auVar342._10_2_ = psVar2[5] + psVar1[5];
            auVar342._12_2_ = psVar2[6] + psVar1[6];
            auVar342._14_2_ = psVar2[7] + psVar1[7];
            auVar306._0_2_ = *psVar1 * _DAT_6709a840;
            auVar306._2_2_ = psVar1[1] * sRam6709a842;
            auVar306._4_2_ = psVar1[2] * sRam6709a844;
            auVar306._6_2_ = psVar1[3] * sRam6709a846;
            auVar306._8_2_ = psVar1[4] * sRam6709a848;
            auVar306._10_2_ = psVar1[5] * sRam6709a84a;
            auVar306._12_2_ = psVar1[6] * sRam6709a84c;
            auVar306._14_2_ = psVar1[7] * sRam6709a84e;
            auVar328 = psraw(auVar325,1);
            auVar304 = psubsw(auVar306,auVar288);
            auVar331 = psubsw(auVar330,auVar342);
            auVar304 = psraw(auVar304,2);
            auVar331 = psraw(auVar331,2);
            auVar304 = paddsw(auVar304,auVar328);
            auVar328 = paddsw(auVar331,auVar328);
            auVar304 = paddsw(auVar304,_DAT_6709a860);
            auVar328 = paddsw(auVar328,_DAT_6709a860);
            auVar304 = psraw(auVar304,6);
            sVar318 = auVar304._0_2_;
            sVar327 = auVar304._2_2_;
            sVar333 = auVar304._4_2_;
            sVar334 = auVar304._6_2_;
            sVar336 = auVar304._8_2_;
            sVar337 = auVar304._10_2_;
            sVar338 = auVar304._12_2_;
            sVar339 = auVar304._14_2_;
            *(ulonglong *)((int)puVar282 + iVar278) =
                 CONCAT17((0 < sVar339) * (sVar339 < 0x100) * auVar304[0xe] - (0xff < sVar339),
                          CONCAT16((0 < sVar338) * (sVar338 < 0x100) * auVar304[0xc] -
                                   (0xff < sVar338),
                                   CONCAT15((0 < sVar337) * (sVar337 < 0x100) * auVar304[10] -
                                            (0xff < sVar337),
                                            CONCAT14((0 < sVar336) * (sVar336 < 0x100) * auVar304[8]
                                                     - (0xff < sVar336),
                                                     CONCAT13((0 < sVar334) * (sVar334 < 0x100) *
                                                              auVar304[6] - (0xff < sVar334),
                                                              CONCAT12((0 < sVar333) *
                                                                       (sVar333 < 0x100) *
                                                                       auVar304[4] -
                                                                       (0xff < sVar333),
                                                                       CONCAT11((0 < sVar327) *
                                                                                (sVar327 < 0x100) *
                                                                                auVar304[2] -
                                                                                (0xff < sVar327),
                                                                                (0 < sVar318) *
                                                                                (sVar318 < 0x100) *
                                                                                auVar304[0] -
                                                                                (0xff < sVar318)))))
                                           )));
            auVar304 = psraw(auVar328,6);
            sVar318 = auVar304._0_2_;
            sVar327 = auVar304._2_2_;
            sVar333 = auVar304._4_2_;
            sVar334 = auVar304._6_2_;
            sVar336 = auVar304._8_2_;
            sVar337 = auVar304._10_2_;
            sVar338 = auVar304._12_2_;
            sVar339 = auVar304._14_2_;
            *(ulonglong *)((int)puVar283 + iVar278) =
                 CONCAT17((0 < sVar339) * (sVar339 < 0x100) * auVar304[0xe] - (0xff < sVar339),
                          CONCAT16((0 < sVar338) * (sVar338 < 0x100) * auVar304[0xc] -
                                   (0xff < sVar338),
                                   CONCAT15((0 < sVar337) * (sVar337 < 0x100) * auVar304[10] -
                                            (0xff < sVar337),
                                            CONCAT14((0 < sVar336) * (sVar336 < 0x100) * auVar304[8]
                                                     - (0xff < sVar336),
                                                     CONCAT13((0 < sVar334) * (sVar334 < 0x100) *
                                                              auVar304[6] - (0xff < sVar334),
                                                              CONCAT12((0 < sVar333) *
                                                                       (sVar333 < 0x100) *
                                                                       auVar304[4] -
                                                                       (0xff < sVar333),
                                                                       CONCAT11((0 < sVar327) *
                                                                                (sVar327 < 0x100) *
                                                                                auVar304[2] -
                                                                                (0xff < sVar327),
                                                                                (0 < sVar318) *
                                                                                (sVar318 < 0x100) *
                                                                                auVar304[0] -
                                                                                (0xff < sVar318)))))
                                           )));
            bVar8 = 7 < iVar278;
            iVar278 = iVar278 + -8;
          } while (bVar8);
          puVar284 = puVar284 + 0x20;
          puVar283 = puVar283 + 2;
          puVar282 = puVar282 + 2;
          param_6 = param_6 + -1;
          iVar278 = local_24;
        } while (param_6 != 0);
      }
    }
    else {
      puVar281 = (ulonglong *)(param_2 + param_3 * -2);
      local_1c = param_3 - param_6;
      local_18 = 0x10 - param_6;
      iVar278 = param_6;
      iVar277 = param_6;
      do {
        do {
          uVar3 = *(ulonglong *)((int)puVar281 + param_3 * 2);
          auVar34._8_6_ = 0;
          auVar34._0_8_ = uVar3;
          auVar34[0xe] = (char)(uVar3 >> 0x38);
          auVar58._8_4_ = 0;
          auVar58._0_8_ = uVar3;
          auVar58[0xc] = (char)(uVar3 >> 0x30);
          auVar58._13_2_ = auVar34._13_2_;
          auVar82._8_4_ = 0;
          auVar82._0_8_ = uVar3;
          auVar82._12_3_ = auVar58._12_3_;
          auVar106._8_2_ = 0;
          auVar106._0_8_ = uVar3;
          auVar106[10] = (char)(uVar3 >> 0x28);
          auVar106._11_4_ = auVar82._11_4_;
          auVar130._8_2_ = 0;
          auVar130._0_8_ = uVar3;
          auVar130._10_5_ = auVar106._10_5_;
          auVar150[8] = (char)(uVar3 >> 0x20);
          auVar150._0_8_ = uVar3;
          auVar150._9_6_ = auVar130._9_6_;
          auVar185._7_8_ = 0;
          auVar185._0_7_ = auVar150._8_7_;
          Var170 = CONCAT81(SUB158(auVar185 << 0x40,7),(char)(uVar3 >> 0x18));
          auVar239._9_6_ = 0;
          auVar239._0_9_ = Var170;
          auVar186._1_10_ = SUB1510(auVar239 << 0x30,5);
          auVar186[0] = (char)(uVar3 >> 0x10);
          auVar240._11_4_ = 0;
          auVar240._0_11_ = auVar186;
          auVar187._1_12_ = SUB1512(auVar240 << 0x20,3);
          auVar187[0] = (char)(uVar3 >> 8);
          uVar4 = *puVar281;
          auVar13._8_6_ = 0;
          auVar13._0_8_ = uVar4;
          auVar13[0xe] = (char)(uVar4 >> 0x38);
          auVar35._8_4_ = 0;
          auVar35._0_8_ = uVar4;
          auVar35[0xc] = (char)(uVar4 >> 0x30);
          auVar35._13_2_ = auVar13._13_2_;
          auVar59._8_4_ = 0;
          auVar59._0_8_ = uVar4;
          auVar59._12_3_ = auVar35._12_3_;
          auVar83._8_2_ = 0;
          auVar83._0_8_ = uVar4;
          auVar83[10] = (char)(uVar4 >> 0x28);
          auVar83._11_4_ = auVar59._11_4_;
          auVar107._8_2_ = 0;
          auVar107._0_8_ = uVar4;
          auVar107._10_5_ = auVar83._10_5_;
          auVar131[8] = (char)(uVar4 >> 0x20);
          auVar131._0_8_ = uVar4;
          auVar131._9_6_ = auVar107._9_6_;
          auVar188._7_8_ = 0;
          auVar188._0_7_ = auVar131._8_7_;
          Var174 = CONCAT81(SUB158(auVar188 << 0x40,7),(char)(uVar4 >> 0x18));
          auVar241._9_6_ = 0;
          auVar241._0_9_ = Var174;
          auVar189._1_10_ = SUB1510(auVar241 << 0x30,5);
          auVar189[0] = (char)(uVar4 >> 0x10);
          auVar242._11_4_ = 0;
          auVar242._0_11_ = auVar189;
          auVar156[2] = (char)(uVar4 >> 8);
          auVar156._0_2_ = (ushort)uVar4;
          auVar156._3_12_ = SUB1512(auVar242 << 0x20,3);
          uVar5 = *(ulonglong *)((int)puVar281 + param_3 * 3);
          auVar14._8_6_ = 0;
          auVar14._0_8_ = uVar5;
          auVar14[0xe] = (char)(uVar5 >> 0x38);
          auVar36._8_4_ = 0;
          auVar36._0_8_ = uVar5;
          auVar36[0xc] = (char)(uVar5 >> 0x30);
          auVar36._13_2_ = auVar14._13_2_;
          auVar60._8_4_ = 0;
          auVar60._0_8_ = uVar5;
          auVar60._12_3_ = auVar36._12_3_;
          auVar84._8_2_ = 0;
          auVar84._0_8_ = uVar5;
          auVar84[10] = (char)(uVar5 >> 0x28);
          auVar84._11_4_ = auVar60._11_4_;
          auVar108._8_2_ = 0;
          auVar108._0_8_ = uVar5;
          auVar108._10_5_ = auVar84._10_5_;
          auVar132[8] = (char)(uVar5 >> 0x20);
          auVar132._0_8_ = uVar5;
          auVar132._9_6_ = auVar108._9_6_;
          auVar190._7_8_ = 0;
          auVar190._0_7_ = auVar132._8_7_;
          Var177 = CONCAT81(SUB158(auVar190 << 0x40,7),(char)(uVar5 >> 0x18));
          auVar243._9_6_ = 0;
          auVar243._0_9_ = Var177;
          auVar191._1_10_ = SUB1510(auVar243 << 0x30,5);
          auVar191[0] = (char)(uVar5 >> 0x10);
          auVar244._11_4_ = 0;
          auVar244._0_11_ = auVar191;
          auVar192._1_12_ = SUB1512(auVar244 << 0x20,3);
          auVar192[0] = (char)(uVar5 >> 8);
          sVar341 = (short)Var177;
          uVar286 = auVar14._13_2_ >> 8;
          uVar6 = *(ulonglong *)((int)puVar281 + param_3 * 4);
          auVar15._8_6_ = 0;
          auVar15._0_8_ = uVar6;
          auVar15[0xe] = (char)(uVar6 >> 0x38);
          auVar37._8_4_ = 0;
          auVar37._0_8_ = uVar6;
          auVar37[0xc] = (char)(uVar6 >> 0x30);
          auVar37._13_2_ = auVar15._13_2_;
          auVar61._8_4_ = 0;
          auVar61._0_8_ = uVar6;
          auVar61._12_3_ = auVar37._12_3_;
          auVar85._8_2_ = 0;
          auVar85._0_8_ = uVar6;
          auVar85[10] = (char)(uVar6 >> 0x28);
          auVar85._11_4_ = auVar61._11_4_;
          auVar109._8_2_ = 0;
          auVar109._0_8_ = uVar6;
          auVar109._10_5_ = auVar85._10_5_;
          auVar133[8] = (char)(uVar6 >> 0x20);
          auVar133._0_8_ = uVar6;
          auVar133._9_6_ = auVar109._9_6_;
          auVar193._7_8_ = 0;
          auVar193._0_7_ = auVar133._8_7_;
          Var177 = CONCAT81(SUB158(auVar193 << 0x40,7),(char)(uVar6 >> 0x18));
          auVar245._9_6_ = 0;
          auVar245._0_9_ = Var177;
          auVar194._1_10_ = SUB1510(auVar245 << 0x30,5);
          auVar194[0] = (char)(uVar6 >> 0x10);
          auVar246._11_4_ = 0;
          auVar246._0_11_ = auVar194;
          auVar157[2] = (char)(uVar6 >> 8);
          auVar157._0_2_ = (ushort)uVar6;
          auVar157._3_12_ = SUB1512(auVar246 << 0x20,3);
          uVar7 = *(ulonglong *)((int)puVar281 + param_3);
          auVar16._8_6_ = 0;
          auVar16._0_8_ = uVar7;
          auVar16[0xe] = (char)(uVar7 >> 0x38);
          auVar38._8_4_ = 0;
          auVar38._0_8_ = uVar7;
          auVar38[0xc] = (char)(uVar7 >> 0x30);
          auVar38._13_2_ = auVar16._13_2_;
          auVar62._8_4_ = 0;
          auVar62._0_8_ = uVar7;
          auVar62._12_3_ = auVar38._12_3_;
          auVar86._8_2_ = 0;
          auVar86._0_8_ = uVar7;
          auVar86[10] = (char)(uVar7 >> 0x28);
          auVar86._11_4_ = auVar62._11_4_;
          auVar110._8_2_ = 0;
          auVar110._0_8_ = uVar7;
          auVar110._10_5_ = auVar86._10_5_;
          auVar134[8] = (char)(uVar7 >> 0x20);
          auVar134._0_8_ = uVar7;
          auVar134._9_6_ = auVar110._9_6_;
          auVar195._7_8_ = 0;
          auVar195._0_7_ = auVar134._8_7_;
          Var181 = CONCAT81(SUB158(auVar195 << 0x40,7),(char)(uVar7 >> 0x18));
          auVar247._9_6_ = 0;
          auVar247._0_9_ = Var181;
          auVar196._1_10_ = SUB1510(auVar247 << 0x30,5);
          auVar196[0] = (char)(uVar7 >> 0x10);
          auVar248._11_4_ = 0;
          auVar248._0_11_ = auVar196;
          auVar158[2] = (char)(uVar7 >> 8);
          auVar158._0_2_ = (ushort)uVar7;
          auVar158._3_12_ = SUB1512(auVar248 << 0x20,3);
          uVar289 = (ushort)uVar7 & 0xff;
          sVar340 = (short)Var181;
          uVar287 = auVar16._13_2_ >> 8;
          puVar281 = puVar281 + 1;
          sVar303 = (ushort)(byte)uVar3 * _DAT_6709a840 * 2;
          sVar312 = auVar187._0_2_ * sRam6709a842 * 2;
          sVar315 = auVar186._0_2_ * sRam6709a844 * 2;
          sVar319 = (short)Var170 * sRam6709a846 * 2;
          sVar321 = auVar150._8_2_ * sRam6709a848 * 2;
          sVar322 = auVar106._10_2_ * sRam6709a84a * 2;
          sVar323 = auVar58._12_2_ * sRam6709a84c * 2;
          sVar324 = (auVar34._13_2_ >> 8) * sRam6709a84e * 2;
          auVar329._0_2_ =
               ((ushort)(byte)uVar5 * _DAT_6709a840 - (((ushort)uVar6 & 0xff) + uVar289)) + sVar303
               + _DAT_6709a870;
          auVar329._2_2_ =
               (auVar192._0_2_ * sRam6709a842 - (auVar157._2_2_ + auVar158._2_2_)) + sVar312 +
               sRam6709a872;
          auVar329._4_2_ =
               (auVar191._0_2_ * sRam6709a844 - (auVar194._0_2_ + auVar196._0_2_)) + sVar315 +
               sRam6709a874;
          auVar329._6_2_ =
               (sVar341 * sRam6709a846 - ((short)Var177 + sVar340)) + sVar319 + sRam6709a876;
          auVar329._8_2_ =
               (auVar132._8_2_ * sRam6709a848 - (auVar133._8_2_ + auVar134._8_2_)) + sVar321 +
               sRam6709a878;
          auVar329._10_2_ =
               (auVar84._10_2_ * sRam6709a84a - (auVar85._10_2_ + auVar86._10_2_)) + sVar322 +
               sRam6709a87a;
          auVar329._12_2_ =
               (auVar36._12_2_ * sRam6709a84c - (auVar37._12_2_ + auVar38._12_2_)) + sVar323 +
               sRam6709a87c;
          auVar329._14_2_ =
               (uVar286 * sRam6709a84e - ((auVar15._13_2_ >> 8) + uVar287)) + sVar324 + sRam6709a87e
          ;
          auVar304 = psraw(auVar329,4);
          sVar318 = auVar304._0_2_;
          sVar327 = auVar304._2_2_;
          sVar333 = auVar304._4_2_;
          sVar334 = auVar304._6_2_;
          sVar336 = auVar304._8_2_;
          sVar337 = auVar304._10_2_;
          sVar338 = auVar304._12_2_;
          sVar339 = auVar304._14_2_;
          *puVar283 = CONCAT17((0 < sVar339) * (sVar339 < 0x100) * auVar304[0xe] - (0xff < sVar339),
                               CONCAT16((0 < sVar338) * (sVar338 < 0x100) * auVar304[0xc] -
                                        (0xff < sVar338),
                                        CONCAT15((0 < sVar337) * (sVar337 < 0x100) * auVar304[10] -
                                                 (0xff < sVar337),
                                                 CONCAT14((0 < sVar336) * (sVar336 < 0x100) *
                                                          auVar304[8] - (0xff < sVar336),
                                                          CONCAT13((0 < sVar334) * (sVar334 < 0x100)
                                                                   * auVar304[6] - (0xff < sVar334),
                                                                   CONCAT12((0 < sVar333) *
                                                                            (sVar333 < 0x100) *
                                                                            auVar304[4] -
                                                                            (0xff < sVar333),
                                                                            CONCAT11((0 < sVar327) *
                                                                                     (sVar327 <
                                                                                     0x100) * 
                                                  auVar304[2] - (0xff < sVar327),
                                                  (0 < sVar318) * (sVar318 < 0x100) * auVar304[0] -
                                                  (0xff < sVar318))))))));
          auVar305._0_2_ =
               (uVar289 * _DAT_6709a840 - (((ushort)uVar4 & 0xff) + (ushort)(byte)uVar5)) + sVar303
               + _DAT_6709a870;
          auVar305._2_2_ =
               (auVar158._2_2_ * sRam6709a842 - (auVar156._2_2_ + auVar192._0_2_)) + sVar312 +
               sRam6709a872;
          auVar305._4_2_ =
               (auVar196._0_2_ * sRam6709a844 - (auVar189._0_2_ + auVar191._0_2_)) + sVar315 +
               sRam6709a874;
          auVar305._6_2_ =
               (sVar340 * sRam6709a846 - ((short)Var174 + sVar341)) + sVar319 + sRam6709a876;
          auVar305._8_2_ =
               (auVar134._8_2_ * sRam6709a848 - (auVar131._8_2_ + auVar132._8_2_)) + sVar321 +
               sRam6709a878;
          auVar305._10_2_ =
               (auVar86._10_2_ * sRam6709a84a - (auVar83._10_2_ + auVar84._10_2_)) + sVar322 +
               sRam6709a87a;
          auVar305._12_2_ =
               (auVar38._12_2_ * sRam6709a84c - (auVar35._12_2_ + auVar36._12_2_)) + sVar323 +
               sRam6709a87c;
          auVar305._14_2_ =
               (uVar287 * sRam6709a84e - ((auVar13._13_2_ >> 8) + uVar286)) + sVar324 + sRam6709a87e
          ;
          auVar304 = psraw(auVar305,4);
          sVar318 = auVar304._0_2_;
          sVar327 = auVar304._2_2_;
          sVar333 = auVar304._4_2_;
          sVar334 = auVar304._6_2_;
          sVar336 = auVar304._8_2_;
          sVar337 = auVar304._10_2_;
          sVar338 = auVar304._12_2_;
          sVar339 = auVar304._14_2_;
          puVar283[0x20] =
               CONCAT17((0 < sVar339) * (sVar339 < 0x100) * auVar304[0xe] - (0xff < sVar339),
                        CONCAT16((0 < sVar338) * (sVar338 < 0x100) * auVar304[0xc] -
                                 (0xff < sVar338),
                                 CONCAT15((0 < sVar337) * (sVar337 < 0x100) * auVar304[10] -
                                          (0xff < sVar337),
                                          CONCAT14((0 < sVar336) * (sVar336 < 0x100) * auVar304[8] -
                                                   (0xff < sVar336),
                                                   CONCAT13((0 < sVar334) * (sVar334 < 0x100) *
                                                            auVar304[6] - (0xff < sVar334),
                                                            CONCAT12((0 < sVar333) *
                                                                     (sVar333 < 0x100) * auVar304[4]
                                                                     - (0xff < sVar333),
                                                                     CONCAT11((0 < sVar327) *
                                                                              (sVar327 < 0x100) *
                                                                              auVar304[2] -
                                                                              (0xff < sVar327),
                                                                              (0 < sVar318) *
                                                                              (sVar318 < 0x100) *
                                                                              auVar304[0] -
                                                                              (0xff < sVar318)))))))
                       );
          puVar283 = puVar283 + 1;
          iVar278 = iVar278 + -8;
        } while (iVar278 != 0);
        puVar281 = (ulonglong *)((int)puVar281 + local_1c);
        puVar283 = (undefined8 *)((int)puVar283 + local_18);
        iVar277 = iVar277 + -1;
        iVar278 = param_6;
      } while (iVar277 != 0);
    }
    iVar278 = (*(code *)param_7)(param_3);
    iVar277 = (*(code *)param_7)(param_3);
    if ((iVar277 < *param_4) || (iVar278 < *param_4)) {
      if (iVar277 < iVar278) {
        *param_4 = iVar277;
        param_5[1] = param_5[1] + -1;
      }
      else {
        *param_4 = iVar278;
        param_5[1] = param_5[1] + '\x01';
      }
    }
  }
  return;
}


