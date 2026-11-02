/* Module: pncrt.dll
   Function: FUN_780071d0
   Address: 780071d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_780071d0(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            char param_6,int param_7,PVOID param_8)

{
  byte bVar1;
  bool bVar2;
  DWORD *pDVar3;
  undefined3 extraout_var;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uStack_20;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  int local_10;
  uint uStack_c;
  int *piStack_8;
  int iStack_4;
  
  iVar7 = *(int *)((int)param_2 + 8);
  local_10 = iVar7;
  if ((iVar7 < -1) || (*(int *)(param_5 + 4) <= iVar7)) {
    FUN_78007be0();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_78009cc0();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_78009cc0();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_78009cc0();
      param_3 = pDVar3[0x1c];
      bVar2 = FUN_78008450(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_78007be0();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_78007446;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_78007be0();
      }
    }
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piStack_1c = (int *)FUN_78007fc0(param_5,param_7,iVar7,&uStack_20,&uStack_c);
      if (uStack_20 < uStack_c) {
        do {
          if ((*piStack_1c <= iVar7) && (iVar7 <= piStack_1c[1])) {
            iStack_14 = piStack_1c[3];
            pbVar9 = (byte *)piStack_1c[4];
            if (0 < iStack_14) {
              piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
              piStack_8 = piVar6 + 1;
              iStack_4 = *piVar6;
              do {
                iStack_18 = iStack_4;
                if (0 < iStack_4) {
                  iVar7 = *(int *)(pbVar9 + 4);
                  piVar6 = piStack_8;
                  do {
                    if ((iVar7 == 0) || (pbVar4 = (byte *)(iVar7 + 8), *(char *)(iVar7 + 8) == '\0')
                       ) {
LAB_7800739f:
                      bVar2 = true;
                    }
                    else {
                      iVar5 = *(int *)((byte *)*piVar6 + 4);
                      if (iVar7 == iVar5) {
LAB_7800737a:
                        if (((((*(byte *)*piVar6 & 2) == 0) || ((*pbVar9 & 8) != 0)) &&
                            (((*(uint *)param_1->ExceptionInformation[2] & 1) == 0 ||
                             ((*pbVar9 & 1) != 0)))) &&
                           (((*(uint *)param_1->ExceptionInformation[2] & 2) == 0 ||
                            ((*pbVar9 & 2) != 0)))) goto LAB_7800739f;
                        bVar2 = false;
                      }
                      else {
                        pbVar8 = (byte *)(iVar5 + 8);
                        do {
                          bVar1 = *pbVar4;
                          bVar2 = bVar1 < *pbVar8;
                          if (bVar1 != *pbVar8) {
LAB_7800735d:
                            iVar5 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
                            goto LAB_78007362;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar4[1];
                          bVar2 = bVar1 < pbVar8[1];
                          if (bVar1 != pbVar8[1]) goto LAB_7800735d;
                          pbVar4 = pbVar4 + 2;
                          pbVar8 = pbVar8 + 2;
                        } while (bVar1 != 0);
                        iVar5 = 0;
LAB_78007362:
                        if (iVar5 == 0) goto LAB_7800737a;
                        bVar2 = false;
                      }
                    }
                    if (bVar2) {
                      FUN_78007650(param_1,param_2,param_3,param_4,param_5,pbVar9,(byte *)*piVar6,
                                   piStack_1c,param_7,param_8);
                      iVar7 = local_10;
                      goto LAB_7800740f;
                    }
                    piVar6 = piVar6 + 1;
                    iStack_18 = iStack_18 + -1;
                  } while (0 < iStack_18);
                }
                iStack_14 = iStack_14 + -1;
                pbVar9 = pbVar9 + 0x10;
                iVar7 = local_10;
              } while (0 < iStack_14);
            }
          }
LAB_7800740f:
          uStack_20 = uStack_20 + 1;
          piStack_1c = piStack_1c + 5;
        } while (uStack_20 < uStack_c);
      }
      if (param_6 == '\0') {
        return;
      }
      FUN_78007a80((int)param_1);
      return;
    }
  }
LAB_78007446:
  if (param_6 == '\0') {
    FUN_78007490(param_1,param_2,param_3,param_4,param_5,iVar7,param_7,param_8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


