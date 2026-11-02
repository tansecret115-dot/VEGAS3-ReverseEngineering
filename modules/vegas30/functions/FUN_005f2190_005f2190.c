/* Module: vegas30.exe
   Function: FUN_005f2190
   Address: 005f2190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005f24bb) */
/* WARNING: Removing unreachable block (ram,0x005f2485) */
/* WARNING: Removing unreachable block (ram,0x005f2266) */

int __thiscall
FUN_005f2190(int param_1,uint param_2,int param_3,uint param_4,int param_5,LPSTR param_6,int param_7
            )

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  HGLOBAL pvVar9;
  LPCSTR lpString2;
  undefined1 *puVar10;
  int *piVar11;
  int iVar12;
  int *unaff_EBP;
  int unaff_ESI;
  longlong lVar13;
  int unaff_retaddr;
  int *piVar14;
  int *piStack_6c;
  undefined4 uStack_68;
  int iVar15;
  LPCWSTR pWStack_48;
  int *local_44;
  int local_40;
  int *local_3c;
  int iStack_38;
  int local_34;
  uint uStack_30;
  int local_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  SIZE_T SStack_1c;
  uint uStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  LPSTR pCStack_4;
  
  local_34 = 1;
  local_2c = param_1;
  lVar13 = FUN_005f2110();
  iVar12 = (int)((ulonglong)lVar13 >> 0x20);
  uVar4 = (uint)lVar13;
  DVar5 = GetCurrentThreadId();
  if ((DVar5 == DAT_00647208) && (iVar6 = FUN_004e4fe0(), iVar6 != 0)) {
    piVar7 = (int *)FUN_004e5010();
    if (piVar7 == (int *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = *piVar7;
    }
    local_3c = (int *)0x0;
    if (0 < local_40) {
      piVar7 = (int *)piVar7[2];
      do {
        puVar1 = (uint *)*piVar7;
        if ((puVar1[8] & 1) != 0) {
          uVar2 = puVar1[1];
          iVar6 = (param_3 - iVar12) - (uint)(param_2 < uVar4);
          if ((iVar6 <= (int)uVar2) && ((iVar6 < (int)uVar2 || (param_2 - uVar4 <= *puVar1)))) {
            lVar3 = lVar13 + CONCAT44(param_3,param_2);
            iVar6 = (int)((ulonglong)lVar3 >> 0x20);
            if (((int)uVar2 <= iVar6) && (((int)uVar2 < iVar6 || (*puVar1 <= (uint)lVar3)))) {
              iVar6 = (param_5 - iVar12) - (uint)(param_4 < uVar4);
              if ((iVar6 <= (int)puVar1[3]) &&
                 (((iVar6 < (int)puVar1[3] || (param_4 - uVar4 <= puVar1[2])) &&
                  (*(longlong *)(puVar1 + 2) <= lVar13 + CONCAT44(param_5,param_4))))) {
                uStack_68 = 0x5f22a3;
                lstrcpynA(param_6,(LPCSTR)(puVar1 + 0xc),param_7);
                param_6[param_7 + -1] = '\0';
                return -0x7fffbffb;
              }
            }
          }
        }
        local_3c = (int *)((int)local_3c + 1);
        piVar7 = piVar7 + 1;
      } while ((int)local_3c < local_40);
    }
  }
  else if (((-1 < param_5) && (((0 < param_5 || (param_4 != 0)) && (-1 < param_3)))) &&
          (*(int **)(param_1 + 0x14c) != (int *)0x0)) {
    local_3c = (int *)0x0;
    iVar6 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x58))();
    if (-1 < iVar6) {
      piVar7 = local_3c;
      iVar6 = (**(code **)(*local_3c + 0xc))();
      if (-1 < iVar6) {
        uStack_68 = 0;
        piStack_6c = (int *)0x0;
        iVar6 = (**(code **)(*unaff_EBP + 0x14))(unaff_EBP,0);
        if (-1 < iVar6) {
          piStack_6c = (int *)&stack0xffffffb4;
          uStack_68 = 4;
          iVar6 = (**(code **)(*unaff_EBP + 0xc))();
          if (-1 < iVar6) {
            piVar14 = (int *)0x0;
            (**(code **)(*piVar7 + 0x14))(piVar7,0,0,0);
            piVar11 = unaff_EBP;
            if ((int *)0xb < unaff_EBP) {
              piVar11 = (int *)0xc;
            }
            iVar6 = (**(code **)(*piVar14 + 0xc))(piVar14,&stack0xffffffac,piVar11,&piStack_6c);
            if ((-1 < iVar6) && (local_3c < &DAT_00000065)) {
              iVar6 = (**(code **)(*piVar7 + 0x14))(piVar7,local_40 + -0xc,0,1,0);
              iVar15 = 0;
              piVar11 = piVar7;
              if (0 < iStack_38) {
                do {
                  pWStack_48 = (LPCWSTR)0x0;
                  piVar7 = piVar11;
                  (**(code **)(*piVar11 + 0xc))(piVar11,&stack0xffffffa4,4,&stack0xffffffa8);
                  local_44 = piStack_6c;
                  if ((int *)0x1b < piStack_6c) {
                    piStack_6c = (int *)0x1c;
                  }
                  piStack_6c = piStack_6c + -1;
                  (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,&local_40,piStack_6c,&uStack_68);
                  iVar6 = (**(code **)(*piVar11 + 0x14))(piVar11,unaff_ESI + -0x1c,0,1,0);
                  if (iStack_20 != 0) {
                    iVar8 = (param_3 - iVar12) - (uint)(uStack_14 < uVar4);
                    if (((iVar8 <= local_2c) &&
                        ((iVar8 < local_2c || (uStack_14 - uVar4 <= uStack_30)))) &&
                       (CONCAT44(local_2c,uStack_30) <= lVar13 + CONCAT44(param_3,uStack_14))) {
                      iVar8 = (iStack_8 - iVar12) - (uint)(uStack_c < uVar4);
                      if ((iVar8 <= iStack_24) &&
                         (((iVar8 < iStack_24 || (uStack_c - uVar4 <= uStack_28)) &&
                          (CONCAT44(iStack_24,uStack_28) <= lVar13 + CONCAT44(iStack_8,uStack_c)))))
                      {
                        if (SStack_1c == 0) {
LAB_005f2543:
                          WideCharToMultiByte(0,0,pWStack_48,-1,pCStack_4,unaff_retaddr,(LPCSTR)0x0,
                                              (LPBOOL)0x0);
LAB_005f255e:
                          pCStack_4[unaff_retaddr + -1] = '\0';
                        }
                        else {
                          pvVar9 = GlobalAlloc(0x42,SStack_1c);
                          pWStack_48 = GlobalLock(pvVar9);
                          if (pWStack_48 != (LPCWSTR)0x0) {
                            iVar6 = (**(code **)(*piVar7 + 0xc))
                                              (piVar7,pWStack_48,SStack_1c,&stack0xffffffa8);
                            if (*pWStack_48 != L'\0') goto LAB_005f2543;
                            if (pCStack_4 != (LPSTR)0x0) {
                              *pCStack_4 = '\0';
                            }
                            goto LAB_005f255e;
                          }
                          iVar6 = -0x7ff8fff2;
                        }
                        if (pWStack_48 != (LPCWSTR)0x0) {
                          pvVar9 = GlobalHandle(pWStack_48);
                          GlobalUnlock(pvVar9);
                          pvVar9 = GlobalHandle(pWStack_48);
                          GlobalFree(pvVar9);
                        }
                        break;
                      }
                    }
                  }
                  (**(code **)(*piVar7 + 0x14))(piVar7,SStack_1c,0,1,0);
                  iVar15 = iVar15 + 1;
                  param_3 = iStack_10;
                  piVar11 = piVar7;
                } while (iVar15 < iStack_38);
              }
            }
          }
          (**(code **)(*piVar7 + 8))(piVar7);
        }
      }
      uStack_68 = 0x5f25a5;
      (**(code **)(*local_44 + 8))();
      if (local_34 == 0) {
        return iVar6;
      }
    }
  }
  FUN_005f2d10();
  lpString2 = (LPCSTR)_SfGetFileNamePtrA_4();
  uStack_68 = 0x5f25cd;
  lstrcpynA(param_6,lpString2,param_7);
  param_6[param_7 + -1] = '\0';
  puVar10 = (undefined1 *)_SfGetFileNameExtensionPtrA_4();
  *puVar10 = 0;
  return 0;
}


