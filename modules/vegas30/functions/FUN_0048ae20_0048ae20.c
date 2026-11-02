/* Module: vegas30.exe
   Function: FUN_0048ae20
   Address: 0048ae20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0048ae20(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_18 [16];
  uint local_8;
  int local_4;
  
  iVar1 = *param_1;
  piVar2 = *(int **)(iVar1 + 0x134);
  if ((piVar2 != (int *)0x0) &&
     (((DAT_0064761c & 0x800) == 0 ||
      ((*(int *)(iVar1 + 0x94) != 1 && (*(int *)(iVar1 + 0x94) != 2)))))) {
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if ((param_2 < 0) || (iVar4 + -1 < param_2)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar2[2] + param_2 * 4);
    }
    if (((param_3 <= *(uint *)(iVar1 + 0xf8)) && (iVar4 != 0)) &&
       (uVar5 = (uint)*(ushort *)(*(int *)(iVar1 + 0xf4) + 8 + param_3 * 0x10),
       ((&DAT_0064c335)[uVar5 * 0x18] & 0x80) == 0)) {
      SendMessageA((HWND)param_1[8],0x40e,2,(LPARAM)local_18);
      if ((local_8 < 2) || (local_4 != 1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      switch(uVar5) {
      case 1:
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x19:
      case 0x1a:
      case 0x1f:
      case 0x21:
switchD_0048aef7_caseD_1:
        return ~*(uint *)(iVar4 + 0x10) >> 3 & 1;
      case 7:
        if (!bVar3) goto switchD_0048aef7_caseD_1;
        break;
      case 10:
      case 0x2a:
      case 0x33:
      case 0x34:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x49:
      case 0x4a:
      case 0x4b:
        return 1;
      case 0xb:
        return (uint)(*(int *)(iVar1 + 0x94) != 2);
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
        if (((*(byte *)(iVar4 + 0x10) & 8) == 0) && (*(int *)(iVar4 + 0x50) != 0)) {
          return 1;
        }
        break;
      case 0x4c:
        if ((*(byte **)(iVar4 + 0x28) == (byte *)0x0) || ((**(byte **)(iVar4 + 0x28) & 1) == 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


