/* Module: vegas30k.dll
   Function: _SfDibCreatePointLUT@12
   Address: 010cc030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LPVOID _SfDibCreatePointLUT_12(int param_1,int param_2,float *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  bool bVar8;
  int local_20;
  float local_10;
  float local_8;
  
                    /* 0xcc030  844  _SfDibCreatePointLUT@12 */
  if (((0 < param_1) && (param_1 < 0x11)) && (0 < param_2)) {
    iVar6 = (int)(param_1 + 7 + (param_1 + 7 >> 0x1f & 7U)) >> 3;
    hMem = GlobalAlloc(2,iVar6 * (1 << ((byte)param_1 & 0x1f)));
    pvVar3 = GlobalLock(hMem);
    if (pvVar3 != (LPVOID)0x0) {
      local_10 = 0.0;
      local_20 = 0;
      if (-1 < param_2) {
        bVar8 = SBORROW4(0,param_2);
        iVar5 = -param_2;
        do {
          if (bVar8 == iVar5 < 0) {
            if (local_10 != (float)_DAT_011dad58) {
              local_8 = 1.0;
              goto LAB_010cc0f0;
            }
          }
          else {
            local_8 = *param_3;
LAB_010cc0f0:
            if (local_10 < local_8) {
              if ((float)_DAT_011dad58 < local_8) {
                local_8 = 1.0;
              }
              iVar4 = ftol();
              iVar5 = ftol();
              if (iVar6 == 1) {
                iVar5 = iVar5 + iVar4;
                for (; iVar4 < iVar5; iVar4 = iVar4 + 1) {
                  uVar1 = ftol();
                  *(undefined1 *)(iVar4 + (int)pvVar3) = uVar1;
                }
              }
              else if (iVar4 < iVar5 + iVar4) {
                iVar5 = (iVar5 + iVar4) - iVar4;
                puVar7 = (undefined2 *)((int)pvVar3 + iVar4 * 2);
                do {
                  uVar2 = ftol();
                  *puVar7 = uVar2;
                  puVar7 = puVar7 + 1;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
            }
            local_10 = local_8;
          }
          local_20 = local_20 + 1;
          param_3 = param_3 + 2;
          bVar8 = SBORROW4(local_20,param_2);
          iVar5 = local_20 - param_2;
        } while (local_20 <= param_2);
      }
      return pvVar3;
    }
  }
  return (LPVOID)0x0;
}


