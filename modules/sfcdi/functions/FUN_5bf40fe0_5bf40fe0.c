/* Module: sfcdi.dll
   Function: FUN_5bf40fe0
   Address: 5bf40fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall
FUN_5bf40fe0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,LPCSTR param_5,
            LPCSTR param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  
  iVar1 = *(int *)(param_3 + 0xc);
  iVar2 = *(int *)(param_4 + 0x34c);
  uVar4 = (undefined2)((uint)param_2 >> 0x10);
  if (iVar1 == 0) {
    uVar3 = FUN_5bf41eb0(param_5,*(uint *)(param_4 + 8) >> 4 & 1,
                         CONCAT22(uVar4,*(undefined2 *)(iVar2 + 4)),(uchar *)(iVar2 + 0x39));
    *(char *)(iVar2 + 0x38) = (char)uVar3;
  }
  else {
    if (iVar1 == 1) {
      uVar3 = FUN_5bf41eb0(param_5,*(uint *)(param_4 + 8) >> 4 & 1,
                           CONCAT22((short)((uint)param_1 >> 0x10),*(undefined2 *)(iVar2 + 4)),
                           (uchar *)(iVar2 + 0x39));
      *(char *)(iVar2 + 0x38) = (char)uVar3;
      return 0;
    }
    if (iVar1 == 2) {
      uVar3 = FUN_5bf41eb0(param_5,*(uint *)(param_4 + 8) >> 4 & 1,
                           CONCAT22(uVar4,*(undefined2 *)(iVar2 + 4)),(uchar *)(iVar2 + 0x39));
      *(char *)(iVar2 + 0x38) = (char)uVar3;
      FUN_5bf40ae0(param_6,param_4);
      return 0;
    }
  }
  return 0;
}


