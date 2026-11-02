/* Module: vidcap30.exe
   Function: FUN_0040f230
   Address: 0040f230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040f230(int param_1,HMENU param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  UINT check;
  
  uVar1 = DAT_005bb838;
  uVar2 = FUN_0040f6e0(param_2);
  switch(uVar2) {
  case 0:
    EnableMenuItem(param_2,0x415,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x417,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x413,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x427,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x428,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x41b,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x41c,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x41d,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x41e,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x41f,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x420,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x421,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x422,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x423,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x424,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x425,(uint)(DAT_005bba94 != 0));
    return;
  case 1:
    iVar3 = FUN_00409b40(DAT_005ba4c0,0x632);
    EnableMenuItem(param_2,0x412,(uint)(iVar3 == 0));
    iVar3 = FUN_00409b40(DAT_005ba4c0,0x633);
    EnableMenuItem(param_2,0x40e,(uint)(iVar3 == 0));
    iVar3 = FUN_00409b40(DAT_005ba4c0,0x629);
    EnableMenuItem(param_2,0x40a,(uint)(iVar3 == 0));
    iVar3 = FUN_00409b40(DAT_005ba4c0,0x62a);
    EnableMenuItem(param_2,0x9cae,(uint)(iVar3 == 0));
    iVar3 = FUN_00409b40(DAT_005ba4c0,0x62b);
    EnableMenuItem(param_2,0x9caf,(uint)(iVar3 == 0));
    iVar3 = FUN_00409b40(DAT_005ba4c0,0x62c);
    EnableMenuItem(param_2,0x40c,(uint)(iVar3 == 0));
    iVar3 = FUN_00409b40(DAT_005ba4c0,0x62d);
    EnableMenuItem(param_2,0x9cad,(uint)(iVar3 == 0));
    iVar3 = FUN_00409b40(DAT_005ba4c0,0x631);
    EnableMenuItem(param_2,0x411,(uint)(iVar3 == 0));
    return;
  case 2:
    CheckMenuItem(param_2,0x9d1f,(-(uint)(DAT_005bb54c != 1) & 0xfffffff8) + 8);
    CheckMenuItem(param_2,0x9d20,-(uint)(DAT_005bb530 != 0) & 8);
    CheckMenuItem(param_2,0x454,(*(int *)(param_1 + 100) < 1) - 1 & 8);
    CheckMenuItem(param_2,1099,-(uint)(*(int *)(param_1 + 0x70) != 0) & 8);
    CheckMenuItem(param_2,0x44c,-(uint)(*(int *)(param_1 + 0x74) != 0) & 8);
    CheckMenuItem(param_2,0x44d,-(uint)(*(int *)(param_1 + 0x78) != 0) & 8);
    CheckMenuItem(param_2,0x44e,-(uint)(*(int *)(param_1 + 0x7c) != 0) & 8);
    CheckMenuItem(param_2,0x44f,-(uint)(*(int *)(param_1 + 0x80) != 0) & 8);
    CheckMenuItem(param_2,0x450,-(uint)(*(int *)(param_1 + 0x84) != 0) & 8);
    EnableMenuItem(param_2,0x9cdc,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x9cdd,(uint)(DAT_005bba94 != 0));
    EnableMenuItem(param_2,0x9cde,(uint)(DAT_005bba94 != 0));
    iVar3 = FUN_0042f300(uVar1);
    if (iVar3 == 0) {
      iVar3 = FUN_0042f330(uVar1);
      if (iVar3 == 0) {
        check = 0x9cde;
      }
      else {
        check = 0x9cdd;
      }
    }
    else {
      check = 0x9cdc;
    }
    CheckMenuRadioItem(param_2,0x9cdc,0x9cde,check,0);
    return;
  case 4:
    FUN_0043aa80(*(undefined4 *)(param_1 + 0x6c),param_2);
    return;
  case 5:
    if (4 < DAT_005bba30) {
      DeleteMenu(param_2,0x9d83,0);
      DeleteMenu(param_2,0x9d84,0);
    }
    break;
  case 7:
  case 9:
  case 0xb:
    FUN_00434a30(*(undefined4 *)(param_1 + 0x6c),param_2);
    return;
  case 8:
  case 10:
  case 0xc:
    FUN_00434b00(*(undefined4 *)(param_1 + 0x6c),param_2);
    return;
  case 0xd:
    FUN_00434bd0(*(undefined4 *)(param_1 + 0x6c),param_2);
    return;
  }
  return;
}


