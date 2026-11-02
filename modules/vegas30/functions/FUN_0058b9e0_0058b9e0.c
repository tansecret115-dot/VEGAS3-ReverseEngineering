/* Module: vegas30.exe
   Function: FUN_0058b9e0
   Address: 0058b9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058b9e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  HGLOBAL hMem;
  int *piVar5;
  int *piVar6;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  *(int *)(param_1 + 0x248) = param_1;
  piVar1 = (int *)(param_1 + 0x248);
  iVar4 = FUN_0058a7e0(*(undefined4 *)(param_1 + 8),piVar1);
  if (-1 < iVar4) {
    iVar4 = *(int *)(*piVar1 + 0x40);
    if (iVar4 == 0) {
      local_14 = *(undefined4 *)(param_1 + 0x358);
      local_10 = *(int *)(param_1 + 0x35c);
      local_c = *(int *)(param_1 + 0x360);
      local_8 = *(undefined4 *)(param_1 + 0x364);
      local_4 = *(undefined2 *)(param_1 + 0x368);
    }
    else if ((0 < iVar4) && (iVar4 < 4)) {
      local_10 = *(int *)(param_1 + 0x35c);
      uVar3 = *(ushort *)(param_1 + 0x366) >> 3;
      local_8 = CONCAT22(*(ushort *)(param_1 + 0x366),uVar3);
      local_c = (uint)uVar3 * local_10;
      local_14 = CONCAT22(1,*(undefined2 *)(param_1 + 0x358));
      local_4 = 0;
    }
    iVar4 = FUN_0058b590(piVar1,&local_14);
    if (-1 < iVar4) {
      iVar4 = FUN_005ec620();
      uVar2 = DAT_0064b138;
      if (iVar4 == 0) {
        iVar4 = -0x7ff8fff2;
      }
      else {
        FUN_005b83b0(DAT_0064b138,1);
        piVar6 = (int *)(param_1 + 0x354);
        iVar4 = FUN_005ec8a0(param_1 + 0x250,piVar6,0,0);
        FUN_005b84d0(uVar2,1);
        if (iVar4 < 0) {
          return -0x7fff0001;
        }
        FUN_005ed3f0(*piVar6);
        iVar4 = FUN_005f0120(0);
        if (-1 < iVar4) {
          iVar4 = **(int **)(*(int *)(*piVar6 + 0x130) + 8);
          hMem = GlobalAlloc(0x40,0xc);
          piVar5 = GlobalLock(hMem);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = (int)&PTR_LAB_00629770;
            piVar5[1] = (int)piVar1;
          }
          *(int **)(iVar4 + 0x60) = piVar5;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
          *(uint *)(*piVar6 + 0x134) = *(uint *)(*piVar6 + 0x134) | 1;
          *(uint *)(*piVar6 + 0x134) = *(uint *)(*piVar6 + 0x134) & 0xfffffffb;
          iVar4 = FUN_0058a8d0(piVar1);
          if (-1 < iVar4) {
            iVar4 = FUN_0058af10(piVar1,&local_14);
            if (-1 < iVar4) {
              *(undefined4 *)(param_1 + 0x3bc) = 1;
              return iVar4;
            }
          }
        }
      }
    }
  }
  return iVar4;
}


