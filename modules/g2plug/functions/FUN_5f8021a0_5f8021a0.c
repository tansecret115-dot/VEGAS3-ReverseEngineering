/* Module: g2plug.dll
   Function: FUN_5f8021a0
   Address: 5f8021a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f8021a0(int *param_1)

{
  int iVar1;
  int iVar2;
  LPCSTR lpString2;
  int **lpsz;
  LPSTR pCVar3;
  char cVar4;
  int *unaff_EBX;
  uchar *unaff_EBP;
  int *unaff_ESI;
  int **lpsz_00;
  longlong lVar5;
  int *piStack_424;
  int *piStack_418;
  int *piStack_414;
  int local_408 [251];
  undefined1 uStack_19;
  longlong *plStack_10;
  
  piStack_414 = local_408;
  piStack_418 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (-1 < iVar1) {
    piStack_424 = unaff_EBX;
    (**(code **)(*unaff_EBX + 4))();
    piStack_418 = (int *)0x0;
    iVar1 = -0x7fffbffb;
    iVar2 = (**(code **)(*piStack_414 + 0x34))(piStack_414,&stack0xfffffbf0,&piStack_418);
    if (iVar2 == 0) {
LAB_5f8021fb:
      if (piStack_424 != (int *)0x0) {
        iVar2 = _mbsicmp(unaff_EBP,"Target Audiences");
        if (iVar2 != 0) goto code_r0x5f802218;
        lpString2 = (LPCSTR)(**(code **)(*piStack_424 + 0x1c))(piStack_424);
        lstrcpynA((LPSTR)&piStack_418,lpString2,0x400);
        lpsz_00 = (int **)0x0;
        uStack_19 = 0;
        lpsz = &piStack_418;
        cVar4 = (char)piStack_418;
        if ((char)piStack_418 != '\0') {
          do {
            if (cVar4 == '(') {
              lpsz_00 = lpsz;
            }
            lpsz = (int **)CharNextA((LPCSTR)lpsz);
            cVar4 = *(char *)lpsz;
          } while (*(char *)lpsz != '\0');
          if (lpsz_00 != (int **)0x0) {
            pCVar3 = CharNextA((LPCSTR)lpsz_00);
            lVar5 = FUN_5f81a940(pCVar3,(undefined4 *)0x0);
            lVar5 = __allmul((uint)lVar5,(int)((ulonglong)lVar5 >> 0x20),0x80,0);
            iVar1 = 0;
            *plStack_10 = lVar5;
          }
        }
        if (piStack_424 != (int *)0x0) {
          (**(code **)(*piStack_424 + 8))(piStack_424);
          piStack_424 = (int *)0x0;
        }
      }
    }
LAB_5f8022ca:
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return iVar1;
code_r0x5f802218:
  if (piStack_424 != (int *)0x0) {
    (**(code **)(*piStack_424 + 8))(piStack_424);
    piStack_424 = (int *)0x0;
  }
  iVar2 = (**(code **)(*unaff_ESI + 0x38))(unaff_ESI,&stack0xfffffbe4,&piStack_424);
  if (iVar2 != 0) goto LAB_5f8022ca;
  goto LAB_5f8021fb;
}


