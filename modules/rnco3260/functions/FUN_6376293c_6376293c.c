/* Module: rnco3260.dll
   Function: FUN_6376293c
   Address: 6376293c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_6376293c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5,
            uint param_6)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar7;
  undefined4 *puVar6;
  
  DAT_6379a424 = param_6;
  DAT_6379a420 = (undefined4 *)(param_3 + _DAT_6379a42c);
  if ((0 < (int)DAT_6379a414) && (uVar4 = DAT_6379a410 >> 3, uVar4 != 0)) {
    DAT_6379a408 = '\x02';
    puVar5 = (undefined4 *)(param_2 + _DAT_6379a428);
    DAT_6379a41c = uVar4;
    puVar7 = param_5;
    puVar6 = (undefined4 *)(param_2 + _DAT_6379a428);
    uVar3 = DAT_6379a414;
    while( true ) {
      do {
        do {
          uVar1 = puVar5[1];
          *param_5 = *puVar5;
          param_5[1] = uVar1;
          cVar2 = DAT_6379a408;
          param_5 = param_5 + 2;
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 2;
        } while (uVar4 != 0);
        param_5 = (undefined4 *)((int)puVar7 + DAT_6379a424);
        uVar3 = uVar3 - 1;
        uVar4 = DAT_6379a41c;
        puVar5 = puVar6 + 0xb4;
        puVar7 = param_5;
        puVar6 = puVar6 + 0xb4;
      } while (uVar3 != 0);
      DAT_6379a408 = DAT_6379a408 + -1;
      if (cVar2 < '\x01') break;
      if (DAT_6379a408 == '\0') {
        uVar3 = DAT_6379a414 >> 1;
        puVar5 = DAT_6379a420;
        puVar6 = DAT_6379a420;
      }
      else {
        DAT_6379a424 = DAT_6379a424 >> 1;
        uVar3 = DAT_6379a414 >> 1;
        DAT_6379a41c = DAT_6379a41c + 1;
        DAT_6379a41c = DAT_6379a41c >> 1;
        uVar4 = DAT_6379a41c;
        puVar5 = DAT_6379a420 + 0x5a;
        puVar6 = DAT_6379a420 + 0x5a;
      }
    }
  }
  return;
}


