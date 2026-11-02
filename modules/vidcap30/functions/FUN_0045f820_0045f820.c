/* Module: vidcap30.exe
   Function: FUN_0045f820
   Address: 0045f820
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045f820(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  iVar4 = 0;
  bVar5 = false;
  if (param_2 == 0) {
    return 0;
  }
  FUN_0042f4b0(param_1,0);
  iVar1 = FUN_0042e510(param_1);
  if (0 < iVar1) {
    do {
      if (bVar5) break;
      uVar2 = FUN_00443740(param_1,iVar3);
      iVar4 = FUN_004445b0(uVar2,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
      bVar5 = iVar4 != 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_0042f5d0(param_1,0);
  return iVar4;
}


