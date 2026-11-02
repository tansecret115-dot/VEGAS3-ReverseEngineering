/* Module: vegas30.exe
   Function: FUN_0044b8d0
   Address: 0044b8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0044b8d0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  LPCSTR lpString2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104 [260];
  
  bVar5 = false;
  if (param_2 == 1000) {
    switch(param_3[2]) {
    case 0x1000:
      FUN_0044bbb0(param_1,param_3[3]);
      return true;
    case 0x1001:
      piVar2 = (int *)FUN_004452b0(param_1);
      if ((((piVar2 != (int *)0x0) && (*piVar2 != 0)) &&
          (iVar4 = FUN_00445380(param_1,0x23b,0,0), -1 < iVar4)) &&
         (iVar4 = FUN_00445590(param_1), -1 < iVar4)) {
        FUN_005b83b0(*(undefined4 *)(param_1 + 0x88),1);
        iVar4 = _SfList_MoveRange_16(piVar2,param_3[3],param_3[4],1);
        FUN_005b84d0(*(undefined4 *)(param_1 + 0x88),1);
        bVar5 = -1 < iVar4;
        if (bVar5) {
          FUN_00445200(param_1,param_3[4]);
          FUN_00448c50(param_1,param_3[4]);
          FUN_00446940(param_1);
          SendMessageA(*(HWND *)(param_1 + 0x144),0x602,param_3[4],0);
          DAT_0064767c = DAT_0064767c | 0x800;
        }
        FUN_004457c0(param_1,0);
      }
      break;
    case 0x1002:
      piVar2 = (int *)FUN_004452b0(param_1);
      if (piVar2 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
      iVar3 = param_3[3];
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (iVar4 + -1 < iVar3) {
        iVar3 = iVar4 + -1;
      }
      param_3[3] = iVar3;
      if (iVar4 != 0) {
        FUN_00445010(param_1,iVar3,local_104,0x104);
        iVar4 = FUN_00445380(param_1,0x23a - (uint)(param_3[4] != 0),local_104,0);
        if ((iVar4 < 0) || (iVar4 = FUN_00445590(param_1), iVar4 < 0)) break;
        FUN_005b83b0(*(undefined4 *)(param_1 + 0x88),1);
        iVar4 = param_3[3];
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(piVar2[2] + iVar4 * 4);
        }
        *(uint *)(iVar4 + 0x78) =
             ((uint)(param_3[4] == 0) ^ *(uint *)(iVar4 + 0x78)) & 1 ^ *(uint *)(iVar4 + 0x78);
        FUN_005b84d0(*(undefined4 *)(param_1 + 0x88),1);
        FUN_004457c0(param_1,0);
        FUN_00446940(param_1);
        DAT_0064767c = DAT_0064767c | 0x800;
      }
      bVar5 = true;
      break;
    case 0x1003:
      puVar1 = (undefined4 *)param_3[4];
      local_10c = *puVar1;
      local_108 = puVar1[1];
      FUN_0044e9f0(param_3[3],puVar1,&local_10c,&DAT_0064b188);
      return true;
    }
  }
  if (param_3[2] == -0x209) {
    if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
      SetWindowPos((HWND)*param_3,*(HWND *)(param_1 + 8),0,0,0,0,0x13);
      SetWindowPos(*(HWND *)(param_1 + 8),(HWND)*param_3,0,0,0,0,0x13);
      return bVar5;
    }
  }
  else if (param_3[2] == -0x208) {
    if (param_2 == 0x41a) {
      lpString2 = (LPCSTR)(param_1 + 0x36c);
    }
    else {
      lpString2 = (LPCSTR)FUN_00448430(param_1,param_3[1]);
    }
    if (lpString2 != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)(param_3 + 4),lpString2,0x50);
      *(undefined1 *)((int)param_3 + 0x5f) = 0;
    }
  }
  return bVar5;
}


