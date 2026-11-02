/* Module: sfmarket2.dll
   Function: FUN_00481c00
   Address: 00481c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481c00(int *param_1,ushort *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar2 = param_3;
  piVar1 = param_1;
  if (param_3 <= (int)(uint)*(ushort *)(param_1 + 0x44)) {
    FUN_004810c0(param_1,(byte *)&DAT_004a86c0,param_3 * 2);
    puVar3 = param_2;
    if (0 < iVar2) {
      do {
        FUN_00481070((undefined1 *)&param_1,(uint)*puVar3);
        FUN_00481110(piVar1,(byte *)&param_1,2);
        iVar2 = iVar2 + -1;
        puVar3 = puVar3 + 1;
      } while (iVar2 != 0);
    }
    FUN_00481140(piVar1);
    return;
  }
  FUN_0047e370((int)param_1,"Invalid number of histogram entries specified");
  return;
}


