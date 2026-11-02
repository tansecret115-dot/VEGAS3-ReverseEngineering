/* Module: vegas30.exe
   Function: FUN_004ebc10
   Address: 004ebc10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ebc10(uchar *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  LPCSTR lpString1;
  HANDLE hObject;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  LPCSTR lpString2;
  int local_114;
  int *local_110;
  int local_10c;
  int *local_108;
  uchar local_104 [260];
  
  *param_2 = 1;
  local_114 = 0;
  local_10c = 0;
  _mbscpy(local_104,param_1);
  FUN_004f0620(local_104,local_104);
  iVar2 = FUN_005f03a0(local_104);
  if (iVar2 == 0) {
    lpString2 = ".sfk";
    lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(local_104);
    iVar2 = lstrcmpiA(lpString1,lpString2);
    if (iVar2 == 0) {
      *param_2 = 0x12;
    }
    local_114 = -0x7ffb1ff9;
    hObject = CreateFileA((LPCSTR)local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0)
    ;
    if (hObject != (HANDLE)0xffffffff) {
      local_114 = 0;
      iVar2 = FUN_004ebb70(hObject);
      if (iVar2 == 0) {
        iVar2 = FUN_005de1a0(hObject,0,0);
        if (iVar2 == 0) {
          iVar2 = FUN_004ebbd0(local_104);
          if (iVar2 != 0) {
            *param_2 = 0x11;
            return 0;
          }
          iVar2 = FUN_00443b40(hObject,0);
          if (iVar2 != 0) {
            *param_2 = 0xf;
            CloseHandle(hObject);
            return 0;
          }
          iVar2 = FUN_004ebf70(hObject);
          if (iVar2 != 0) {
            CloseHandle(hObject);
            iVar2 = _SfSelfRegister_IsSupported_4(local_104);
            if (-1 < iVar2) {
              *param_2 = 7;
            }
            goto LAB_004ebd63;
          }
          iVar2 = FUN_004ec010(hObject);
          if (iVar2 != 0) {
            *param_2 = iVar2;
          }
        }
        else {
          *param_2 = 6;
        }
      }
      else {
        *param_2 = 0x10;
        local_114 = 0;
      }
      CloseHandle(hObject);
    }
  }
LAB_004ebd63:
  if (local_114 < 0) {
    return local_114;
  }
  if (*param_2 != 1) {
    return local_114;
  }
  local_114 = -0x7ff8fff2;
  pcVar3 = (char *)FUN_005ec620();
  if (pcVar3 == (char *)0x0) {
    return local_114;
  }
  local_110 = (int *)0x0;
  iVar2 = -0x7fffbffb;
  if (*pcVar3 != '\0') {
    puVar5 = *(undefined4 **)(pcVar3 + 8);
    iVar2 = -0x7ffb1ff6;
    bVar1 = *(byte *)(puVar5 + 6);
    while ((bVar1 & 2) != 2) {
      iVar4 = lstrcmpiA((LPCSTR)local_104,(LPCSTR)*puVar5);
      if (iVar4 == 0) break;
      if (iVar4 < 0) {
        puVar5 = (undefined4 *)puVar5[4];
      }
      else {
        puVar5 = (undefined4 *)puVar5[5];
      }
      bVar1 = *(byte *)(puVar5 + 6);
    }
    if ((*(byte *)(puVar5 + 6) & 2) != 2) {
      local_110 = (int *)puVar5[1];
      iVar2 = 0;
    }
  }
  local_114 = iVar2;
  if (iVar2 < 0) {
    local_114 = FUN_005ec8a0(local_104,&local_110,0,0);
    if (local_114 < 0) goto LAB_004ebf33;
    local_10c = FUN_005f0120(0);
  }
  else {
    FUN_005f3120(&local_114,0,0);
  }
  if (-1 < local_114) {
    uVar7 = 0;
    if ((int *)local_110[0x4c] == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)local_110[0x4c];
    }
    *(int *)(param_3 + 0x234) = iVar2;
    if (0 < iVar2) {
      piVar6 = *(int **)(local_110[0x4c] + 8);
      do {
        if (*(int *)(*piVar6 + 4) == 2) {
          uVar7 = uVar7 | 1;
        }
        else if (*(int *)(*piVar6 + 4) == 3) {
          uVar7 = uVar7 | 2;
        }
        piVar6 = piVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(uint *)(param_3 + 0x238) = uVar7;
    if (uVar7 == 1) {
      *param_2 = 3;
    }
    else if (uVar7 == 2) {
      *param_2 = 4;
    }
    else if (uVar7 == 3) {
      *param_2 = 5;
    }
    else {
      *param_2 = 2;
    }
    *(undefined4 *)(param_3 + 0x230) = 0xffffffff;
    if ((*(byte *)(param_3 + 0x218) & 8) == 0) {
      local_108 = (int *)0x0;
      iVar2 = FUN_005f1150(&local_108);
      if (iVar2 < 0) {
        return iVar2;
      }
      local_114 = (**(code **)(*local_108 + 0x38))(local_108,param_3 + 0x228);
      (**(code **)(*local_110 + 8))(local_110);
    }
    if (-1 < local_10c) {
      return local_114;
    }
    return local_10c;
  }
LAB_004ebf33:
  if (local_114 != -0x7ffb1f7a) {
    return local_114;
  }
  *param_2 = 2;
  return -0x7ffb1f7a;
}


