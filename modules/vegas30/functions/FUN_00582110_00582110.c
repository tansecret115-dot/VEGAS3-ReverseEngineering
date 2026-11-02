/* Module: vegas30.exe
   Function: FUN_00582110
   Address: 00582110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00582110(HMENU param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  undefined4 uVar5;
  UINT item;
  undefined4 unaff_ESI;
  tagMENUITEMINFOA *ptVar6;
  UINT *pUVar7;
  undefined4 uStack_158;
  undefined1 local_154 [8];
  undefined1 local_14c [4];
  undefined1 local_148 [2];
  short sStack_146;
  undefined1 local_140 [8];
  int local_138;
  int *local_134;
  tagMENUITEMINFOA local_130 [6];
  
  FUN_005808d0();
  iVar2 = GetMenuItemCount(param_1);
  item = 0;
  local_138 = iVar2;
  if (0 < iVar2) {
    do {
      local_130[0].dwTypeData = (LPSTR)&local_130[0].hbmpItem;
      local_130[0].cbSize = 0x2c;
      local_130[0].fMask = 0x36;
      local_130[0].cch = 0x104;
      BVar3 = GetMenuItemInfoA(param_1,item,1,local_130);
      if (((BVar3 != 0) && (0 < param_2)) && ((local_130[0].fType & 4) == 0)) {
        hMem = GlobalAlloc(0x40,0x34);
        pvVar4 = GlobalLock(hMem);
        if (pvVar4 != (LPVOID)0x0) {
          FUN_005808d0();
          ptVar6 = local_130;
          pUVar7 = (UINT *)((int)pvVar4 + 8);
          for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pUVar7 = ptVar6->cbSize;
            ptVar6 = (tagMENUITEMINFOA *)&ptVar6->fMask;
            pUVar7 = pUVar7 + 1;
          }
          if ((local_130[0].fType & 0x100) == 0) {
            FUN_005808d0();
            FUN_005808d0();
            piVar1 = local_134;
            iVar2 = (**(code **)(*local_134 + 0xc))(local_130[0].wID,local_140);
            if ((iVar2 == 0) || (sStack_146 == 0)) {
              FUN_00580c90(local_130[0].hbmpUnchecked);
            }
            else {
              FUN_005808d0();
              FUN_00580510(local_148);
              FUN_00580b40(local_130[0].hbmpUnchecked);
              iVar2 = FUN_005810d0(8);
              if (iVar2 != -1) {
                uVar5 = FUN_0057fce0(local_14c,iVar2);
                FUN_00580c30(uVar5);
                FUN_00580a90();
              }
              FUN_005802b0(&stack0xfffffea4,0x104,&DAT_00628fdc,unaff_ESI,uStack_158);
              FUN_00580a90();
              FUN_00580a90();
            }
            uVar5 = (**(code **)(*piVar1 + 4))(local_130[0].fType);
            *(undefined4 *)((int)pvVar4 + 4) = uVar5;
            FUN_00580c30(local_154);
            FUN_00580a90();
            FUN_00580a90();
          }
          local_130[0].fType = local_130[0].fType | 0x100;
          local_130[0].fMask = local_130[0].fMask | 0x30;
          local_130[0].dwItemData = (ULONG_PTR)pvVar4;
          SetMenuItemInfoA(param_1,item,1,local_130);
          iVar2 = local_138;
        }
      }
      item = item + 1;
    } while ((int)item < iVar2);
  }
  FUN_00580a90();
  return;
}


