/* Module: wmfplug2.dll
   Function: FUN_00406ed0
   Address: 00406ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00406ed0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_EBP;
  int iVar5;
  short sStack_1c;
  int *piStack_8;
  
  iVar3 = param_1;
  piVar1 = (int *)(param_1 + 0xc);
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x10) != 0)) &&
     (*(int *)(param_1 + 0x14) != 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return -0x7fffbffb;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_0042c080(piVar1,4,-1,-1,0x80000002);
  }
  if (*(int *)(iVar3 + 0x10) == 0) {
    FUN_0042c080((int *)(iVar3 + 0x10),4,-1,-1,0x80000002);
  }
  piVar2 = (int *)(iVar3 + 0x14);
  if (*(int *)(iVar3 + 0x14) == 0) {
    FUN_0042c080(piVar2,4,-1,-1,0x80000000);
  }
  iVar4 = (**(code **)**(undefined4 **)(iVar3 + 0x28))(*(undefined4 **)(iVar3 + 0x28));
  if (iVar4 < 0) {
    return -0x7fffbffb;
  }
  FUN_00406cd0(piStack_8,*piVar2,L"Title");
  FUN_00406cd0(piStack_8,*piVar2,L"Author");
  FUN_00406cd0(piStack_8,*piVar2,L"Artist");
  FUN_00406cd0(piStack_8,*piVar2,L"Description");
  FUN_00406cd0(piStack_8,*piVar2,L"Copyright");
  FUN_00406cd0(piStack_8,*piVar2,L"WM/Genre");
  FUN_00406cd0(piStack_8,*piVar2,L"WM/AlbumTitle");
  FUN_00406cd0(piStack_8,*piVar2,L"WM/Year");
  FUN_00406cd0(piStack_8,*piVar2,L"Rating");
  FUN_00406cd0(piStack_8,*piVar2,L"WM/Track");
  FUN_00406cd0(piStack_8,*piVar2,L"WM/PromotionURL");
  iVar4 = (**(code **)(*piStack_8 + 0x1c))(piStack_8,&stack0xffffffec);
  iVar5 = 0;
  sStack_1c = (short)&param_1;
  if (sStack_1c != 0) {
    do {
      if (iVar4 < 0) break;
      iVar4 = FUN_00407130(unaff_EBP,*piVar1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)((uint)&param_1 & 0xffff));
  }
  iVar4 = (**(code **)(*unaff_EBP + 0x2c))(unaff_EBP,&stack0xffffffe8);
  iVar5 = 0;
  do {
    if (iVar4 < 0) break;
    iVar4 = FUN_00407240((int *)0x0,*(int *)(iVar3 + 0x10),iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xb600);
  (**(code **)(iRam00000000 + 8))(0);
  return iVar4;
}


