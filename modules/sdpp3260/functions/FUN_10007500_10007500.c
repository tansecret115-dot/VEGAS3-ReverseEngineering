/* Module: sdpp3260.dll
   Function: FUN_10007500
   Address: 10007500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10007500(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar3 = iVar2 + 1;
      if (iVar3 == param_2) {
        uVar7 = 2;
        uVar6 = 0;
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)*(byte *)(iVar3 + param_1);
        iVar3 = iVar2 + 2;
        bVar4 = iVar3 != param_2;
        if (bVar4) {
          uVar6 = (uint)*(byte *)(iVar3 + param_1);
          iVar3 = iVar2 + 3;
        }
        else {
          uVar6 = 0;
        }
        uVar7 = (uint)!bVar4;
      }
      FUN_10007580((uint)*(byte *)(iVar2 + param_1),uVar5,uVar6,uVar7,param_3,iVar1);
      iVar1 = iVar1 + 4;
      iVar2 = iVar3;
    } while (iVar3 < param_2);
  }
  *(undefined1 *)(iVar1 + param_3) = 0;
  return iVar1 + 1;
}


