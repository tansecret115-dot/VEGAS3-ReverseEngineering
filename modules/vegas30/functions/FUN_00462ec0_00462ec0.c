/* Module: vegas30.exe
   Function: FUN_00462ec0
   Address: 00462ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00462f47) */
/* WARNING: Removing unreachable block (ram,0x00462fde) */

void FUN_00462ec0(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x218);
    if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = ftol();
      uVar2 = lVar4 + *(int *)(param_1 + 0xac0);
      uVar3 = (uint)uVar2;
      if ((uVar2 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < uVar3)))
         ) {
        if (0x3fff < (longlong)uVar2) {
          uVar3 = 0x3fff;
        }
      }
      else {
        uVar3 = 0xffffc000;
      }
    }
    *(uint *)(iVar1 + 0x38) = uVar3;
    if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = ftol();
      uVar2 = lVar4 + *(int *)(param_1 + 0xac0);
      uVar3 = (uint)uVar2;
      if ((uVar2 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < uVar3)))
         ) {
        if (0x3fff < (longlong)uVar2) {
          uVar3 = 0x3fff;
        }
      }
      else {
        uVar3 = 0xffffc000;
      }
    }
    *(uint *)(iVar1 + 0x3c) = uVar3;
    *(uint *)(iVar1 + 0x68) = *(uint *)(iVar1 + 0x68) & 0xffffff82;
  }
  return;
}


