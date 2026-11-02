/* Module: rnco3260.dll
   Function: FUN_63762a14
   Address: 63762a14
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_63762a14(int param_1,int param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,
            undefined4 param_6,uint param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  
  DAT_6379a454 = param_3;
  DAT_6379a458 = param_4;
  DAT_6379a45c = param_5;
  DAT_6379a460 = param_6;
  DAT_6379a424 = param_7;
  DAT_6379a420 = (undefined8 *)(param_2 + _DAT_6379a42c);
  if ((0 < (int)DAT_6379a414) && (uVar3 = DAT_6379a410 >> 4, uVar3 != 0)) {
    DAT_6379a408 = '\x02';
    puVar4 = (undefined8 *)(param_1 + _DAT_6379a428);
    DAT_6379a41c = uVar3;
    puVar6 = param_3;
    puVar5 = (undefined8 *)(param_1 + _DAT_6379a428);
    uVar2 = DAT_6379a414;
    do {
      while( true ) {
        do {
          do {
            *param_3 = *puVar4;
            param_3[1] = puVar4[1];
            cVar1 = DAT_6379a408;
            param_3 = param_3 + 2;
            uVar3 = uVar3 - 1;
            puVar4 = puVar4 + 2;
          } while (uVar3 != 0);
          param_3 = (undefined8 *)((int)puVar6 + DAT_6379a424);
          uVar2 = uVar2 - 1;
          uVar3 = DAT_6379a41c;
          puVar4 = puVar5 + 0x5a;
          puVar6 = param_3;
          puVar5 = puVar5 + 0x5a;
        } while (uVar2 != 0);
        DAT_6379a408 = DAT_6379a408 + -1;
        if (cVar1 < '\x01') {
          return;
        }
        if (DAT_6379a408 != '\0') break;
        uVar2 = DAT_6379a414 >> 1;
        puVar4 = DAT_6379a420;
        param_3 = DAT_6379a458;
        puVar6 = DAT_6379a458;
        puVar5 = DAT_6379a420;
      }
      DAT_6379a424 = DAT_6379a424 >> ((byte)DAT_6379a460 & 0x1f);
      puVar4 = DAT_6379a420 + 0x2d;
      uVar2 = DAT_6379a414 >> 1;
      DAT_6379a41c = DAT_6379a41c + 1;
      DAT_6379a41c = DAT_6379a41c >> 1;
      uVar3 = DAT_6379a41c;
      param_3 = DAT_6379a45c;
      puVar6 = DAT_6379a45c;
      puVar5 = puVar4;
    } while (uVar2 != 0);
  }
  return;
}


