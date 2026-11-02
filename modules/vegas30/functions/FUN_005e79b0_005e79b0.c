/* Module: vegas30.exe
   Function: FUN_005e79b0
   Address: 005e79b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e79b0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  LPSTR lpMultiByteStr;
  IStream *This;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint unaff_EBP;
  uint unaff_ESI;
  uint uVar6;
  int unaff_EDI;
  undefined4 *puStack_5c8;
  undefined4 uStack_5b0;
  undefined4 auStack_5a8 [2];
  WCHAR aWStack_5a0 [2];
  undefined4 local_59c [129];
  undefined4 uStack_398;
  undefined4 uStack_394;
  int iStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 auStack_37c [5];
  undefined4 local_368 [194];
  void *pvStack_60;
  int *piStack_20;
  int *piStack_1c;
  int iStack_c;
  
  puStack_5c8 = param_3;
  FUN_005d30f0();
  puVar2 = local_368;
  for (iVar3 = 0xda; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puStack_5c8 = local_59c;
  iVar3 = (**(code **)(*param_1 + 0x14))(param_1,0,0,1);
  if ((-1 < iVar3) &&
     (iVar3 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xfffffa40,4,&puStack_5c8), -1 < iVar3)) {
    if ((unaff_ESI & 0x7fffffff) == 4) {
      iVar3 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xfffffa3c,4,&puStack_5c8);
      if (-1 < iVar3) {
        puVar2 = auStack_5a8;
        for (iVar3 = 0x8b; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        iVar3 = (**(code **)(*param_1 + 0xc))(param_1,auStack_5a8,0x22c,&puStack_5c8);
        if (-1 < iVar3) {
          *param_3 = auStack_5a8[0];
          param_3[1] = auStack_5a8[1];
          param_3[0x43] = uStack_398;
          lpMultiByteStr = (LPSTR)(param_3 + 2);
          if ((&stack0x00000000 == (undefined1 *)0x5a0) || (aWStack_5a0[0] != L'\0')) {
            WideCharToMultiByte(0,0,aWStack_5a0,-1,lpMultiByteStr,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (lpMultiByteStr != (LPSTR)0x0) {
            *lpMultiByteStr = '\0';
          }
          *(undefined1 *)((int)param_3 + 0x10b) = 0;
          param_3[0x44] = uStack_394;
          param_3[0x46] = uStack_38c;
          param_3[0x47] = uStack_388;
          param_3[0x48] = uStack_384;
          param_3[0x49] = uStack_380;
          iVar5 = unaff_EDI - (int)puStack_5c8;
          param_3[0x45] = iStack_390;
          if (iVar5 != 0) {
            uVar6 = 0;
            if (iStack_390 != 0) {
              puVar2 = param_3 + 0x4a;
              do {
                iVar3 = (**(code **)(*param_1 + 0xc))(param_1,puVar2,4,&puStack_5c8);
                if (iVar3 < 0) break;
                iVar5 = iVar5 - (int)puStack_5c8;
                uVar6 = uVar6 + 1;
                puVar2 = puVar2 + 1;
              } while (uVar6 < (uint)param_3[0x45]);
            }
            uVar6 = 0;
            if (param_3[0x46] != 0) {
              puVar2 = param_3 + 0xca;
              do {
                iVar3 = (**(code **)(*param_1 + 0xc))(param_1,puVar2,4,&puStack_5c8);
                if (iVar3 < 0) break;
                iVar5 = iVar5 - (int)puStack_5c8;
                uVar6 = uVar6 + 1;
                puVar2 = puVar2 + 1;
              } while (uVar6 < (uint)param_3[0x46]);
            }
            iVar3 = (**(code **)(*param_1 + 0xc))(param_1,param_3 + 0x14a,4,&puStack_5c8);
            if (iVar3 < 0) goto LAB_005e7d77;
            puVar2 = (undefined4 *)(iVar5 - (int)puStack_5c8);
            if ((puVar2 != (undefined4 *)0x0) && (iStack_c != 0)) {
              iVar3 = (**(code **)(*param_1 + 0xc))(param_1,param_3 + 0x14c,4,&puStack_5c8);
              if (iVar3 < 0) goto LAB_005e7d77;
              puVar4 = (undefined4 *)((int)puVar2 - (int)puStack_5c8);
              if (puVar2 != puStack_5c8) {
                iVar3 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xfffffa44,4,&puStack_5c8);
                if (iVar3 < 0) goto LAB_005e7d77;
                if ((puVar4 != puStack_5c8) && (unaff_EBP != 0)) {
                  iVar3 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,(LPSTREAM *)(param_3 + 0x158));
                  if ((iVar3 < 0) ||
                     (This = (IStream *)param_3[0x158],
                     iVar3 = (*This->lpVtbl->Write)(This,&stack0xfffffa44,4,(ULONG *)0x0), iVar3 < 0
                     )) goto LAB_005e7d77;
                  uVar6 = 0;
                  if (unaff_EBP != 0) {
                    do {
                      puVar2 = auStack_37c;
                      for (iVar3 = 0xda; iVar5 = iStack_c, iVar3 != 0; iVar3 = iVar3 + -1) {
                        *puVar2 = 0;
                        puVar2 = puVar2 + 1;
                      }
                      iVar3 = FUN_005e8be0(param_1,iStack_c,auStack_37c);
                      if ((iVar3 < 0) ||
                         (iVar3 = FUN_005e8430(param_3[0x158],iVar5,unaff_ESI >> 0x1f), iVar3 < 0))
                      goto LAB_005e7d77;
                      if (pvStack_60 != (void *)0x0) {
                        free(pvStack_60);
                      }
                      pvStack_60 = (void *)0x0;
                      if (piStack_20 != (int *)0x0) {
                        (**(code **)(*piStack_20 + 8))(piStack_20);
                      }
                      piStack_20 = (int *)0x0;
                      if (piStack_1c != (int *)0x0) {
                        (**(code **)(*piStack_1c + 8))(piStack_1c);
                      }
                      uVar6 = uVar6 + 1;
                      piStack_1c = (int *)0x0;
                    } while (uVar6 < unaff_EBP);
                  }
                }
              }
            }
          }
          if (-1 < iVar3) {
            return iVar3;
          }
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x14))(param_1,uStack_5b0,4,0,0);
      iVar3 = -0x7ffb1fe4;
    }
  }
LAB_005e7d77:
  if (pvStack_60 != (void *)0x0) {
    free(pvStack_60);
  }
  if (piStack_20 != (int *)0x0) {
    (**(code **)(*piStack_20 + 8))(piStack_20);
  }
  piVar1 = (int *)param_3[0x158];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_3[0x158] = 0;
  return iVar3;
}


