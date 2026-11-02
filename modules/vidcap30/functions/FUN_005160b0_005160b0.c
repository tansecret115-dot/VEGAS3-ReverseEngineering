/* Module: vidcap30.exe
   Function: FUN_005160b0
   Address: 005160b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005160b0(byte *param_1,LONG param_2,LONG param_3,undefined4 *param_4)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  int iVar2;
  
  pt.y = param_3;
  pt.x = param_2;
  BVar1 = PtInRect((RECT *)(param_1 + 0x48),pt);
  if (BVar1 != 0) {
    pt_00.y = param_3;
    pt_00.x = param_2;
    BVar1 = PtInRect((RECT *)(param_1 + 0x130),pt_00);
    if (BVar1 != 0) {
      return 5;
    }
    iVar2 = FUN_005162a0(param_1,param_2,param_3);
    if (iVar2 != 0) {
      switch(iVar2) {
      case 1:
        if ((*param_1 & 1) == 0) {
          *param_4 = 7;
          return 0xfffffffd;
        }
        break;
      case 2:
        if ((*param_1 & 1) == 0) {
          *param_4 = 3;
          return 0xfffffffd;
        }
        break;
      case 3:
        if ((*param_1 & 1) == 0) {
          *param_4 = 1;
          return 0xfffffffd;
        }
        break;
      case 4:
        if ((*param_1 & 1) == 0) {
          *param_4 = 5;
          return 0xfffffffd;
        }
        break;
      case 5:
        if ((*param_1 & 1) != 0) {
          *param_4 = 7;
          return 0xfffffffd;
        }
        break;
      case 6:
        if ((*param_1 & 1) != 0) {
          *param_4 = 3;
          return 0xfffffffd;
        }
        break;
      case 7:
        if ((*param_1 & 1) != 0) {
          *param_4 = 1;
          return 0xfffffffd;
        }
        break;
      case 8:
        if ((*param_1 & 1) != 0) {
          *param_4 = 5;
          return 0xfffffffd;
        }
        break;
      case 9:
        *param_4 = 0;
        return 0xfffffffd;
      case 10:
        *param_4 = 2;
        return 0xfffffffd;
      case 0xb:
        *param_4 = 6;
        return 0xfffffffd;
      case 0xc:
        *param_4 = 4;
        return 0xfffffffd;
      }
    }
  }
  return 0xffffffff;
}


