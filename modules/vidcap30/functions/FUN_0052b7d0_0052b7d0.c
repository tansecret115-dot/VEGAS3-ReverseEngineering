/* Module: vidcap30.exe
   Function: FUN_0052b7d0
   Address: 0052b7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052b7d0(int param_1,int param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 1:
      *(undefined1 *)(param_1 + 0x11d) = 0x10;
      break;
    case 2:
      *(undefined1 *)(param_1 + 0x11d) = 0x20;
      break;
    case 3:
      *(undefined1 *)(param_1 + 0x11d) = 0x40;
      break;
    case 4:
      *(undefined1 *)(param_1 + 0x11d) = 0x80;
      break;
    case 5:
    case 6:
    case 7:
      FUN_00549570(param_1,"Unknown row filter for method 0");
    case 0:
      *(undefined1 *)(param_1 + 0x11d) = 8;
      break;
    default:
      *(undefined1 *)(param_1 + 0x11d) = param_3;
    }
    if (*(int *)(param_1 + 0xe4) != 0) {
      if (((*(byte *)(param_1 + 0x11d) & 0x10) != 0) && (*(int *)(param_1 + 0xe8) == 0)) {
        puVar1 = (undefined1 *)FUN_00549470(param_1,*(int *)(param_1 + 0xd0) + 1);
        *(undefined1 **)(param_1 + 0xe8) = puVar1;
        *puVar1 = 1;
      }
      if (((*(byte *)(param_1 + 0x11d) & 0x20) != 0) && (*(int *)(param_1 + 0xec) == 0)) {
        if (*(int *)(param_1 + 0xe0) == 0) {
          FUN_00549570(param_1,"Can\'t add Up filter after starting");
          *(byte *)(param_1 + 0x11d) = *(byte *)(param_1 + 0x11d) & 0xdf;
        }
        else {
          puVar1 = (undefined1 *)FUN_00549470(param_1,*(int *)(param_1 + 0xd0) + 1);
          *(undefined1 **)(param_1 + 0xec) = puVar1;
          *puVar1 = 2;
        }
      }
      if (((*(byte *)(param_1 + 0x11d) & 0x40) != 0) && (*(int *)(param_1 + 0xf0) == 0)) {
        if (*(int *)(param_1 + 0xe0) == 0) {
          FUN_00549570(param_1,"Can\'t add Average filter after starting");
          *(byte *)(param_1 + 0x11d) = *(byte *)(param_1 + 0x11d) & 0xbf;
        }
        else {
          puVar1 = (undefined1 *)FUN_00549470(param_1,*(int *)(param_1 + 0xd0) + 1);
          *(undefined1 **)(param_1 + 0xf0) = puVar1;
          *puVar1 = 3;
        }
      }
      if (((*(byte *)(param_1 + 0x11d) & 0x80) != 0) && (*(int *)(param_1 + 0xf4) == 0)) {
        if (*(int *)(param_1 + 0xe0) == 0) {
          FUN_00549570(param_1,"Can\'t add Paeth filter after starting");
          *(byte *)(param_1 + 0x11d) = *(byte *)(param_1 + 0x11d) & 0x7f;
        }
        else {
          puVar1 = (undefined1 *)FUN_00549470(param_1,*(int *)(param_1 + 0xd0) + 1);
          *(undefined1 **)(param_1 + 0xf4) = puVar1;
          *puVar1 = 4;
        }
      }
      if (*(char *)(param_1 + 0x11d) == '\0') {
        *(undefined1 *)(param_1 + 0x11d) = 8;
        return;
      }
    }
  }
  else {
    FUN_00549540(param_1,"Unknown custom filter method");
  }
  return;
}


