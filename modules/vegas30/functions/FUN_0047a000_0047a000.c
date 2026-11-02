/* Module: vegas30.exe
   Function: FUN_0047a000
   Address: 0047a000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0047a02e) */

undefined4 FUN_0047a000(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = param_4;
  iVar3 = param_1;
  if (((*(int *)(param_1 + 0x20) <= param_3) && (param_3 <= *(int *)(param_1 + 0x28))) &&
     (piVar1 = *(int **)(param_1 + 0x18), piVar1 != (int *)0x0)) {
    iVar5 = *(int *)(param_1 + 0x44);
    if ((iVar5 < 0) || (*piVar1 + -1 < iVar5)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar1[2] + iVar5 * 4);
    }
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0xc) & 4) == 0)) {
      uVar2 = **(uint **)(iVar5 + 0x30);
      param_1 = FUN_00479820(param_1,iVar5,param_3,param_4,0);
      iVar4 = param_3;
      if (param_1 < uVar2) {
        FUN_00479550(iVar3,0,iVar5);
        if (((param_2 & 4) == 0) || (param_1 == 0)) {
          *(undefined4 *)
           (*(int *)(*(int *)(iVar5 + 0x30) + 4) * param_1 + 8 +
           *(int *)(*(int *)(iVar5 + 0x30) + 8)) = *(undefined4 *)(iVar5 + 0x28);
        }
        else {
          FUN_004797c0(iVar3,iVar5,param_1);
        }
        FUN_00479520(iVar3);
        FUN_00477e00(iVar3,iVar5,1);
        FUN_00479600(iVar3,0,iVar5);
        return 1;
      }
      iVar5 = FUN_00479ce0(iVar3,iVar5,param_3,uVar6,&param_1,0);
      if (iVar5 != 0) {
        uVar6 = FUN_00479a60(iVar3,param_2 | 4,iVar4,uVar6);
        return uVar6;
      }
    }
  }
  return 0;
}


