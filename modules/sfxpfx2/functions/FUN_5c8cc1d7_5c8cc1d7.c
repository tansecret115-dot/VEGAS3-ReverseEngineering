/* Module: sfxpfx2.dll
   Function: FUN_5c8cc1d7
   Address: 5c8cc1d7
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8cc1d7(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  WCHAR *pWVar6;
  undefined4 *puVar7;
  WCHAR local_204 [256];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    FUN_5c8cc546(local_204,*(UINT *)(param_1 + 0x20));
    iVar2 = FUN_5c8cd102(local_204);
    uVar5 = iVar2 * 2 + 2;
    puVar3 = CoTaskMemAlloc(uVar5);
    if (puVar3 == (undefined4 *)0x0) {
      uVar1 = 0x8007000e;
    }
    else {
      pWVar6 = local_204;
      puVar7 = puVar3;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *(undefined4 *)pWVar6;
        pWVar6 = pWVar6 + 2;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar7 = (char)*pWVar6;
        pWVar6 = (WCHAR *)((int)pWVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      param_2[1] = puVar3;
      param_2[2] = 0x154;
      *param_2 = 0x1c;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[3] = 0x96;
      FUN_5c8cc5b7((ushort)*(undefined4 *)(param_1 + 0x24),FUN_5c8cc27f,0,param_2 + 2);
      uVar1 = 0;
    }
  }
  return uVar1;
}


