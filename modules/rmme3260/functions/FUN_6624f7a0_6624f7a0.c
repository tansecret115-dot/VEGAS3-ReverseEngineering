/* Module: rmme3260.dll
   Function: FUN_6624f7a0
   Address: 6624f7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6624f7a0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined **ppuVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  if (param_1 == 0) {
    return 0xb;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar7 = (uint)*(ushort *)(param_1 + 0xe);
  puVar1 = (uint *)(param_1 + 0x28);
  param_1 = 0;
  ppuVar4 = &PTR_DAT_6627c0d4;
  while (((((uint)ppuVar4[-1] & 1) == 0 || ((uint *)*ppuVar4 == (uint *)0x0)) ||
         (bVar3 = FUN_6624f870((uint *)*ppuVar4,uVar2,uVar7,puVar1),
         CONCAT31(extraout_var,bVar3) == 0))) {
    ppuVar4 = ppuVar4 + 4;
    param_1 = param_1 + 1;
    if (0x6627c213 < (int)ppuVar4) {
      iVar5 = 0;
      param_1 = 0;
      bVar3 = FUN_6624f870((uint *)&DAT_6627bf64,uVar2,uVar7,puVar1);
      if (CONCAT31(extraout_var_00,bVar3) == 0) {
        puVar6 = (uint *)&DAT_6627bf64;
        do {
          puVar6 = puVar6 + 7;
          iVar5 = param_1 + 1;
          bVar3 = FUN_6624f870(puVar6,uVar2,uVar7,puVar1);
          param_1 = iVar5;
        } while (CONCAT31(extraout_var_01,bVar3) == 0);
      }
      return (&DAT_6627bf60)[iVar5 * 7];
    }
  }
  return param_1;
}


