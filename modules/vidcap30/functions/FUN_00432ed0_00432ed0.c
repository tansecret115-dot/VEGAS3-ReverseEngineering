/* Module: vidcap30.exe
   Function: FUN_00432ed0
   Address: 00432ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00432ed0(int *param_1,int param_2,undefined4 *param_3)

{
  int *lpString1;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = param_3;
  piVar1 = param_1;
  iVar4 = 0;
  iVar5 = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_2 == 0x461) {
    switch(param_3[2]) {
    case 0xc:
      iVar5 = FUN_00434210(param_1[0x61],&param_1,0);
      if (-1 < iVar5) {
        iVar5 = FUN_004338e0(piVar1,param_1,puVar2[3],puVar2[4]);
        FUN_00417990(param_1);
      }
      break;
    case 0xd:
      FUN_00431e30(param_3[5],param_3[1]);
      break;
    case 0xe:
      iVar5 = FUN_00433ed0(param_1,param_3[3],param_3[4],param_3[5]);
      break;
    case 0xf:
      iVar5 = FUN_00434280(param_1[0x61],&param_1);
      if (-1 < iVar5) {
        iVar5 = FUN_00433d10(piVar1,param_1,puVar2[3],puVar2[4]);
        FUN_00417990(param_1);
      }
      break;
    case 0x11:
      iVar5 = FUN_00405880(DAT_005ba4c0,param_3[5],param_1[5],0);
      local_8 = 0;
      break;
    case 0x12:
      iVar5 = FUN_00405880(DAT_005ba4c0,param_3[5],param_1[5],1);
      local_8 = 0;
      break;
    case 0x1e:
      local_4 = 0x16;
      iVar5 = FUN_004177a0(param_3[5],1,0,1);
      if (-1 < iVar5) {
        iVar5 = FUN_004178c0(puVar2[5],0);
      }
      break;
    case 0x1f:
      param_1[0x62] = 0;
      break;
    case 0x20:
      param_3[10] = DAT_005bb9a4;
      param_3[0xb] = DAT_005bb9a8;
      param_3[0xc] = DAT_005bb9ac;
      param_3[8] = &DAT_005b5398;
      param_3[9] = 0xc;
      break;
    case 0x28:
      iVar5 = FUN_004334b0(param_3[5]);
      break;
    case 0x29:
      iVar5 = FUN_004338a0(param_3[5]);
      break;
    case 0x32:
      lpString1 = param_1 + 0x20;
      lstrcpynA((LPSTR)lpString1,(LPCSTR)param_3[5],0x104);
      *(undefined1 *)((int)piVar1 + 0x183) = 0;
      if (((byte)piVar1[3] & 3) == 1) {
        SetWindowTextA((HWND)piVar1[2],(LPCSTR)lpString1);
      }
      break;
    case 0x33:
      FUN_004041c0(*param_3);
      break;
    case 0x34:
      FUN_004041c0(0);
      break;
    case 0x36:
      iVar3 = FUN_00434fc0(*(undefined4 *)(DAT_005ba4c0 + 0x6c));
      if (iVar3 == 0) {
        if (puVar2[7] == 1) {
          FUN_00441970(puVar2[5] + 0x14);
          local_8 = 1;
        }
        else if (puVar2[7] == 2) {
          param_1 = (int *)puVar2[5];
          if (param_1 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *param_1;
          }
          if (0 < iVar3) {
            do {
              FUN_00441970(*(int *)(param_1[2] + iVar4 * 4) + 0x14);
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar3);
          }
          local_8 = 1;
        }
      }
      else {
        local_8 = 3;
      }
      break;
    case 0x3c:
      param_1[0x62] = 1;
    }
  }
  FUN_00404910(iVar5,local_4);
  return local_8;
}


