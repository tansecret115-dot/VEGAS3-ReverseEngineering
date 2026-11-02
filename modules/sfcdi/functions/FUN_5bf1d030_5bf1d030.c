/* Module: sfcdi.dll
   Function: FUN_5bf1d030
   Address: 5bf1d030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1d030(HWND param_1,int param_2)

{
  ULONG_PTR *pUVar1;
  int iVar2;
  HWND pHVar3;
  HWND pHVar4;
  CHAR *pCVar5;
  int *piVar6;
  int cchMax;
  uint uVar7;
  char local_118 [20];
  CHAR local_104 [260];
  
  pUVar1 = *(ULONG_PTR **)(*(int *)(param_2 + 0xc) + 0x40);
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0xfffffda1:
    iVar2 = 0x470;
    pHVar3 = GetParent(param_1);
    pHVar3 = GetDlgItem(pHVar3,iVar2);
    SfOpenFile_GetExtensionFromComboBoxType(local_118,pHVar3);
    pCVar5 = local_104;
    cchMax = 0x104;
    iVar2 = 0x480;
    pHVar3 = GetParent(param_1);
    GetDlgItemTextA(pHVar3,iVar2,pCVar5,cchMax);
    SfChangeOutputName(local_104,local_118);
    pCVar5 = local_104;
    iVar2 = 0x480;
    pHVar3 = GetParent(param_1);
    SetDlgItemTextA(pHVar3,iVar2,pCVar5);
    return 0;
  case 0xfffffda2:
    break;
  case 0xfffffda3:
    FUN_5bf35f80(0,param_1,*pUVar1,1,(uchar *)pUVar1[0x43]);
    return 1;
  default:
    return 0;
  case 0xfffffda7:
    uVar7 = 0x8001;
    piVar6 = (int *)0x0;
    pHVar4 = (HWND)0x0;
    pHVar3 = GetParent(param_1);
    FUN_5bf2fd50(pHVar3,pHVar4,piVar6,uVar7);
    return 0;
  }
  iVar2 = FUN_5bf2fcb0();
  if (iVar2 == 0) {
    SetWindowLongA(param_1,0,1);
    return 0;
  }
  SetWindowLongA(param_1,0,1);
  return 1;
}


