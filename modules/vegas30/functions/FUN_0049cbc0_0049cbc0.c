/* Module: vegas30.exe
   Function: FUN_0049cbc0
   Address: 0049cbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0049cc81) */
/* WARNING: Removing unreachable block (ram,0x0049cc1d) */
/* WARNING: Removing unreachable block (ram,0x0049cc5f) */
/* WARNING: Removing unreachable block (ram,0x0049cc9b) */

void FUN_0049cbc0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = ftol();
  lVar2 = lVar2 + *(longlong *)(param_1 + 0xb88);
  if (lVar2 < *(longlong *)(param_1 + 0x98)) {
    iVar1 = 1;
  }
  else {
    iVar1 = -1;
  }
  lVar3 = FUN_004a2d10(param_1,*(undefined4 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0x9c),iVar1);
  lVar4 = FUN_004a2d10(param_1,*(undefined4 *)(param_1 + 0xce0),lVar2,-iVar1);
  lVar2 = lVar4;
  if (lVar4 < lVar3) {
    lVar2 = lVar3;
    lVar3 = lVar4;
  }
  if (*(longlong *)(param_1 + 0x1a8) < lVar3) {
    lVar3 = *(longlong *)(param_1 + 0x1a8);
  }
  if (lVar2 < *(longlong *)(param_1 + 0x1b0)) {
    lVar2 = *(longlong *)(param_1 + 0x1b0);
  }
  FUN_00453340(param_1,lVar3,lVar2 - lVar3,param_4 != 0 | 0x60);
  return;
}


