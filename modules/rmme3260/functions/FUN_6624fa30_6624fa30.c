/* Module: rmme3260.dll
   Function: FUN_6624fa30
   Address: 6624fa30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_6624fa30(uint *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = 0;
  if ((((param_1 != (uint *)0x0) && (param_2 != (undefined1 *)0x0)) && (0 < (int)param_3)) &&
     ((((int)param_3 < 0x101 && (0x27 < *param_1)) &&
      ((param_1[4] == 0 && (*(ushort *)((int)param_1 + 0xe) < 9)))))) {
    uVar5 = 1 << ((byte)*(ushort *)((int)param_1 + 0xe) & 0x1f);
    iVar6 = *param_1 + (int)param_1;
    uVar1 = param_3;
    if ((int)uVar5 < (int)param_3) {
      uVar1 = uVar5;
    }
    uVar3 = 0;
    if (0 < (int)uVar1) {
      puVar2 = (undefined1 *)(iVar6 + 1);
      puVar4 = param_2;
      uVar7 = uVar1;
      do {
        puVar2[1] = *puVar4;
        *puVar2 = puVar2[(int)param_2 - iVar6];
        puVar2[-1] = puVar4[2];
        puVar2[2] = 0;
        puVar2 = puVar2 + 4;
        uVar7 = uVar7 - 1;
        uVar3 = uVar1;
        puVar4 = puVar4 + 4;
      } while (uVar7 != 0);
    }
    if (uVar3 == uVar5) {
      uVar3 = 0;
    }
    param_1[8] = uVar3;
    param_1[9] = uVar3;
  }
  return uVar1;
}


