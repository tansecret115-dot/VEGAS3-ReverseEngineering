/* Module: sfs4rw.dll
   Function: FUN_0044d150
   Address: 0044d150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044d150(int *param_1,int param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 1:
      *(undefined1 *)((int)param_1 + 0x11d) = 0x10;
      break;
    case 2:
      *(undefined1 *)((int)param_1 + 0x11d) = 0x20;
      break;
    case 3:
      *(undefined1 *)((int)param_1 + 0x11d) = 0x40;
      break;
    case 4:
      *(undefined1 *)((int)param_1 + 0x11d) = 0x80;
      break;
    case 5:
    case 6:
    case 7:
      FUN_00475b00((int)param_1,"Unknown row filter for method 0");
    case 0:
      *(undefined1 *)((int)param_1 + 0x11d) = 8;
      break;
    default:
      *(undefined1 *)((int)param_1 + 0x11d) = param_3;
    }
    if (param_1[0x39] != 0) {
      if (((*(byte *)((int)param_1 + 0x11d) & 0x10) != 0) && (param_1[0x3a] == 0)) {
        puVar1 = FUN_00475a00(param_1,param_1[0x34] + 1);
        param_1[0x3a] = (int)puVar1;
        *puVar1 = 1;
      }
      if (((*(byte *)((int)param_1 + 0x11d) & 0x20) != 0) && (param_1[0x3b] == 0)) {
        if (param_1[0x38] == 0) {
          FUN_00475b00((int)param_1,"Can\'t add Up filter after starting");
          *(byte *)((int)param_1 + 0x11d) = *(byte *)((int)param_1 + 0x11d) & 0xdf;
        }
        else {
          puVar1 = FUN_00475a00(param_1,param_1[0x34] + 1);
          param_1[0x3b] = (int)puVar1;
          *puVar1 = 2;
        }
      }
      if (((*(byte *)((int)param_1 + 0x11d) & 0x40) != 0) && (param_1[0x3c] == 0)) {
        if (param_1[0x38] == 0) {
          FUN_00475b00((int)param_1,"Can\'t add Average filter after starting");
          *(byte *)((int)param_1 + 0x11d) = *(byte *)((int)param_1 + 0x11d) & 0xbf;
        }
        else {
          puVar1 = FUN_00475a00(param_1,param_1[0x34] + 1);
          param_1[0x3c] = (int)puVar1;
          *puVar1 = 3;
        }
      }
      if (((*(byte *)((int)param_1 + 0x11d) & 0x80) != 0) && (param_1[0x3d] == 0)) {
        if (param_1[0x38] == 0) {
          FUN_00475b00((int)param_1,"Can\'t add Paeth filter after starting");
          *(byte *)((int)param_1 + 0x11d) = *(byte *)((int)param_1 + 0x11d) & 0x7f;
        }
        else {
          puVar1 = FUN_00475a00(param_1,param_1[0x34] + 1);
          param_1[0x3d] = (int)puVar1;
          *puVar1 = 4;
        }
      }
      if (*(char *)((int)param_1 + 0x11d) == '\0') {
        *(undefined1 *)((int)param_1 + 0x11d) = 8;
        return;
      }
    }
  }
  else {
    FUN_00475ad0(param_1,"Unknown custom filter method");
  }
  return;
}


