/* Module: vegas30k.dll
   Function: FUN_0119bde0
   Address: 0119bde0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0119bef1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0119bde0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int unaff_ESI;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_14 [12];
  undefined1 local_8 [8];
  
  uVar3 = 0;
  if ((*(int *)(param_1 + 0x620) != 0) && (*(int *)(param_1 + 0x644) == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x640) == 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x84))(*(int **)(param_1 + 0x2c),6,local_8);
    if (*(int *)(param_1 + 0x3f8) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x516);
      uVar4 = ftol();
      lVar5 = __allmul(uVar4,(uint)uVar1,0);
      iVar2 = *(int *)(param_1 + 0x3f8);
      unaff_ESI = 0;
      uVar4 = ftol();
      lVar6 = __allmul(uVar4,*(undefined2 *)(iVar2 + 0xc),0);
      if (lVar5 < lVar6) {
        uVar3 = (uint)((int)lVar6 - (int)lVar5) / (uint)uVar1;
      }
    }
    *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(param_1 + 0x50a);
    *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(param_1 + 0x50e);
    *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(param_1 + 0x512);
    *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(param_1 + 0x516);
    *(undefined2 *)(param_1 + 0x658) = *(undefined2 *)(param_1 + 0x51a);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x638) + 0x24))
                      (*(int **)(param_1 + 0x638),(undefined4 *)(param_1 + 0x50a),0,
                       -(uint)(uVar3 != 0) & (uint)&stack0xffffffd0,0,auStack_14,&LAB_011964e0,
                       param_1);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x8a8) = 0;
      *(undefined4 *)(param_1 + 0x640) = 1;
      *(undefined4 *)(param_1 + 0x620) = 1;
      *(undefined4 *)(param_1 + 0x8ac) = 0;
      if (unaff_ESI == 0) {
        FUN_011af200();
      }
    }
    return iVar2;
  }
  *(undefined4 *)(param_1 + 0x620) = 1;
  if (param_2 == 0) {
    FUN_011af200();
  }
  return 0;
}


