/* Module: vegas30k.dll
   Function: Mixer_SetActive
   Address: 0117cdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall Mixer_SetActive(struct _tmixerprops *,int,int,int,int,int) */

long Mixer_SetActive(_tmixerprops *param_1,int param_2,int param_3,int param_4,int param_5,
                    int param_6)

{
  bool bVar1;
  ISFMixerIn *pIVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  ISFMixerIn *pIVar6;
  int *piVar7;
  _tmixerprops *p_Var8;
  undefined4 unaff_EBX;
  ISFMixerIn *unaff_EBP;
  int unaff_ESI;
  ISFMixer *pIVar9;
  ISFMixerIn *pIVar10;
  int iVar11;
  ISFMixerIn *unaff_EDI;
  int *piVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined4 uStack_ef4;
  ISFMixer *pIStack_ef0;
  ISFMixer *pIStack_eec;
  ISFMixer *pIStack_ee8;
  ISFMixer *pIStack_ee4;
  ISFMixerIn *pIStack_ee0;
  ISFMixer *pIStack_edc;
  ISFMixer *pIStack_ed8;
  ISFMixer *pIStack_ed4;
  ISFMixer *pIStack_ed0;
  ISFMixer *pIStack_ecc;
  ISFMixer **ppIStack_ec8;
  ISFMixer *pIStack_ec4;
  ISFMixer *pIStack_ec0;
  int *piStack_ebc;
  ISFMixer *pIVar15;
  ISFMixer *pIVar16;
  ISFMixer *in_stack_fffff154;
  ISFMixer *pIVar17;
  ISFMixer *pIStack_e90;
  ISFMixerIn *pIStack_e8c;
  ISFMixerIn *pIStack_e88;
  int *piStack_e84;
  ISFMixer *pIStack_e80;
  ISFMixer *pIStack_e7c;
  ISFMixerIn *pIVar18;
  int *piVar19;
  int *piVar20;
  uint uVar21;
  undefined2 uStack_e5c;
  ushort uStack_e5a;
  undefined2 uStack_e58;
  undefined2 uStack_e56;
  uint local_e54;
  int *local_e50;
  undefined4 local_e4c;
  undefined4 local_e48;
  ISFMixer *local_e44;
  undefined4 local_e40;
  int *local_e3c;
  ISFMixerIn local_e38 [8];
  undefined4 local_e30 [9];
  ISFMixer local_e0c [4];
  uchar local_e08 [220];
  CHAR aCStack_d2c [16];
  ISFMixerIn aIStack_d1c [220];
  ISFMixerIn aIStack_c40 [12];
  int aiStack_c34 [3];
  ISFMixerIn aIStack_c28 [944];
  uint auStack_878 [7];
  undefined4 auStack_85c [4];
  int aiStack_84c [259];
  int aiStack_440 [257];
  int iStack_3c;
  int iStack_10;
  
                    /* 0x17cdf0  222  ?Mixer_SetActive@@YGJPAU_tmixerprops@@HHHHH@Z */
  uStack_e5c = (undefined2)unaff_EBX;
  uStack_e5a = (ushort)((uint)unaff_EBX >> 0x10);
  DAT_012b09cc = *(undefined4 *)param_1;
  local_e44 = *(ISFMixer **)(param_1 + 4);
  local_e30[0] = *(undefined4 *)(param_1 + 0x10c);
  local_e54 = 0;
  local_e3c = (int *)0x0;
  local_e40 = 0;
  local_e50 = (int *)0x0;
  local_e48 = 0;
  local_e4c = *(undefined4 *)(param_1 + 0x114);
  DAT_012b09d0 = *(undefined4 *)(param_1 + 4);
  _mbscpy(&DAT_012b09d4,(uchar *)(param_1 + 8));
  pIStack_e7c = (ISFMixer *)0x117ce5b;
  _mbscpy(local_e08,(uchar *)(param_1 + 8));
  DAT_012b0ad8 = *(undefined4 *)(param_1 + 0x10c);
  DAT_012b0adc = *(int *)(param_1 + 0x110);
  _DAT_012b0ae0 = *(undefined4 *)(param_1 + 0x114);
  _DAT_012b0ae4 = *(undefined4 *)(param_1 + 0x118);
  _DAT_012b0ae8 = *(undefined4 *)(param_1 + 800);
  DAT_012b0aec = *(undefined4 *)(param_1 + 0x324);
  _DAT_012b0af0 = *(undefined4 *)(param_1 + 0x328);
  DAT_012b0afc = *(undefined4 *)(param_1 + 0x32c);
  DAT_012b0b00 = *(undefined4 *)(param_1 + 0x330);
  DAT_012b0b04 = *(undefined4 *)(param_1 + 0x334);
  DAT_012b0b08 = *(undefined4 *)(param_1 + 0x338);
  DAT_012b0b0c = *(undefined4 *)(param_1 + 0x33c);
  DAT_012b0b10 = *(undefined4 *)(param_1 + 0x340);
  DAT_012b0b14 = *(undefined4 *)(param_1 + 0x344);
  DAT_012b0b18 = *(undefined4 *)(param_1 + 0x348);
  if (DAT_012b09c8 == (ISFMixer *)0x0) {
    pIStack_e80 = (ISFMixer *)&local_e3c;
    pIStack_e7c = local_e44;
    piStack_e84 = (int *)0x117d78b;
    iVar3 = FUN_011839e0();
    if (iVar3 < 0) {
      return iVar3;
    }
    local_e44 = (ISFMixer *)FUN_01183b50();
    (**(code **)(*local_e3c + 8))();
    unaff_EDI = (ISFMixerIn *)0x1;
  }
  else {
    uVar21 = 0;
    pIVar6 = local_e38;
    piVar19 = (int *)0x0;
    pIStack_e7c = local_e0c;
    pIVar18 = (ISFMixerIn *)0x0;
    pIStack_e80 = DAT_012b09c8;
    piStack_e84 = (int *)0x117cf2f;
    (**(code **)(*(int *)DAT_012b09c8 + 0x24))();
    pIStack_e88 = aIStack_d1c;
    piStack_e84 = (int *)&DAT_00000104;
    pIStack_e8c = (ISFMixerIn *)&local_e44;
    pIStack_e90 = DAT_012b09c8;
    (**(code **)(*(int *)DAT_012b09c8 + 0x2c))();
    if (iStack_10 == 0) {
      if ((local_e54 == uVar21) && (iVar3 = lstrcmpA((LPCSTR)local_e30,aCStack_d2c), iVar3 == 0)) {
        if (unaff_EBP != pIVar6) {
          pIStack_e7c = (ISFMixer *)0x1;
          Mixer_Unprepare();
          local_e50 = (int *)0x0;
          (**(code **)(*DAT_012b09c4 + 0x4c))();
          if (local_e50 != (int *)0x0) {
            unaff_EDI = pIVar18;
            pIVar18 = pIVar6;
            (**(code **)(*local_e50 + 0x1c))();
            pIStack_e88 = (ISFMixerIn *)0x0;
            piVar12 = (int *)0x0;
            piVar7 = piStack_e84;
            piVar20 = piVar19;
            while( true ) {
              piVar4 = piVar7;
              if (piVar7 <= piVar19) {
                piVar4 = piVar19;
              }
              if (piVar4 <= piVar12) break;
              if (piVar12 < piVar7) {
                if (piVar19 <= piVar12) {
                  (**(code **)(*(int *)DAT_012b09c8 + 0xa0))();
                  piVar19 = piVar20;
                  goto LAB_0117d068;
                }
              }
              else {
                Mixer_GetMainBus(&pIStack_e88,(ulong)piVar12,DAT_012b09c8);
                (**(code **)(*(int *)pIStack_e88 + 0x8c))();
                (**(code **)(*(int *)pIVar6 + 8))();
                piStack_ebc = (int *)0x117d050;
                (**(code **)(*(int *)DAT_012b09c8 + 0xd0))();
                piVar19 = piVar20;
LAB_0117d068:
                unaff_EDI = (ISFMixerIn *)0x1;
                piVar7 = piStack_e84;
                piVar20 = piVar19;
              }
              piVar12 = (int *)((int)piVar12 + 1);
            }
            (**(code **)(*(int *)unaff_EBP + 8))();
            pIVar6 = pIVar18;
          }
        }
        pIVar15 = DAT_012b09c8;
        pIVar17 = (ISFMixer *)&stack0xfffff1a0;
        pIVar18 = aIStack_c28;
        (**(code **)(*(int *)DAT_012b09c8 + 0x60))();
        uVar5 = 0;
        if (uVar21 != 0) {
          p_Var8 = param_1 + 0x11c;
          piVar19 = aiStack_c34;
          do {
            if (*(int *)p_Var8 != *piVar19) {
              pIStack_e88 = (ISFMixerIn *)0x1;
              Mixer_Unprepare();
              (**(code **)(*(int *)DAT_012b09c8 + 100))();
              unaff_EDI = pIVar6;
              break;
            }
            uVar5 = uVar5 + 1;
            p_Var8 = p_Var8 + 4;
            piVar19 = piVar19 + 1;
            unaff_EDI = pIVar6;
          } while (uVar5 < uVar21);
        }
        iVar3 = (**(code **)(*(int *)DAT_012b09c8 + 0xac))();
        if (iVar3 != *(int *)(param_1 + 0x31c)) {
          pIStack_e8c = (ISFMixerIn *)0x1;
          Mixer_Unprepare();
          (**(code **)(*(int *)DAT_012b09c8 + 0xa8))();
          (**(code **)(*(int *)DAT_012b09c8 + 0xb0))();
        }
        pIVar16 = (ISFMixer *)&uStack_e5c;
        piVar19 = (int *)0x0;
        in_stack_fffff154 = DAT_012b09c8;
        (**(code **)(*(int *)DAT_012b09c8 + 0x6c))();
        if ((unaff_ESI != *(int *)(param_1 + 0x324)) ||
           ((uint)uStack_e5a != *(uint *)(param_1 + 0x328))) {
          if (pIVar18 == (ISFMixerIn *)0x0) {
            Mixer_Unprepare();
          }
          unaff_EDI = (ISFMixerIn *)0x1;
          pIVar18 = (ISFMixerIn *)0x1;
          piStack_ebc = (int *)0x117d1ab;
          (**(code **)(*(int *)DAT_012b09c8 + 0x88))();
          pIStack_ec0 = (ISFMixer *)&stack0xfffff18c;
          piStack_ebc = (int *)0x0;
          pIStack_ec4 = DAT_012b09c8;
          ppIStack_ec8 = (ISFMixer **)0x117d202;
          (**(code **)(*(int *)DAT_012b09c8 + 0x70))();
          pIStack_ecc = (ISFMixer *)&pIStack_e80;
          ppIStack_ec8 = (ISFMixer **)0x1;
          pIStack_ed0 = DAT_012b09c8;
          pIStack_ed4 = (ISFMixer *)0x117d213;
          (**(code **)(*(int *)DAT_012b09c8 + 0x70))();
        }
        if (iStack_3c != 0) {
          iVar3 = (**(code **)(*(int *)DAT_012b09c8 + 0x1f0))();
          if (iVar3 != 0) {
            if (pIVar18 == (ISFMixerIn *)0x0) {
              Mixer_Unprepare();
            }
            unaff_EDI = (ISFMixerIn *)0x1;
            pIVar18 = (ISFMixerIn *)0x1;
            Mixer_RemoveAllFXSends(DAT_012b09c8);
          }
          pIVar9 = (ISFMixer *)0x0;
          pIVar17 = (ISFMixer *)0x0;
          if (pIStack_e90 != (ISFMixer *)0x0) {
            do {
              pIVar6 = (ISFMixerIn *)0x0;
              piStack_ebc = (int *)0x117d277;
              Mixer_GetMainBus((ISFMixerIn **)&stack0xfffff16c,(ulong)pIVar9,DAT_012b09c8);
              if (pIVar6 != (ISFMixerIn *)0x0) {
                iVar3 = (**(code **)(*(int *)pIVar6 + 0x100))();
                piStack_ebc = (int *)0x117d2a8;
                (**(code **)(*(int *)pIVar15 + 8))();
                pIVar17 = (ISFMixer *)0x0;
                if (iVar3 == 0) {
                  if (pIVar18 == (ISFMixerIn *)0x0) {
                    Mixer_Unprepare();
                  }
                  unaff_EDI = (ISFMixerIn *)0x1;
                  pIVar9 = (ISFMixer *)0x0;
                  pIVar18 = (ISFMixerIn *)0x1;
                  pIVar17 = (ISFMixer *)0x0;
                  if (pIStack_e90 != (ISFMixer *)0x0) {
                    do {
                      piStack_ebc = (int *)0x117d2e3;
                      Mixer_GetMainBus((ISFMixerIn **)&stack0xfffff16c,(ulong)pIVar9,DAT_012b09c8);
                      if ((pIVar17 != (ISFMixer *)0x0) &&
                         (iVar3 = (**(code **)(*(int *)pIVar17 + 0x100))(), iVar3 == 0)) {
                        (**(code **)(*(int *)pIVar17 + 0x108))();
                        piStack_ebc = (int *)0x117d311;
                        (**(code **)(*(int *)pIVar15 + 8))();
                        pIVar17 = (ISFMixer *)0x0;
                      }
                      pIVar9 = pIVar9 + 1;
                    } while (pIVar9 < pIStack_e90);
                  }
                }
                break;
              }
              pIVar9 = pIVar9 + 1;
              pIVar17 = (ISFMixer *)0x0;
            } while (pIVar9 < pIStack_e90);
          }
        }
        pIVar6 = (ISFMixerIn *)(uint)(DAT_012b099c == 0);
        pIVar15 = DAT_012b09c8;
        (**(code **)(*(int *)DAT_012b09c8 + 0xb4))();
        while( true ) {
          piStack_ebc = aiStack_84c;
          bVar1 = false;
          pIStack_ec0 = (ISFMixer *)0x0;
          pIStack_ec4 = pIStack_e7c;
          ppIStack_ec8 = (ISFMixer **)DAT_012b09c4;
          pIStack_ecc = (ISFMixer *)0x117d35a;
          (**(code **)(*DAT_012b09c4 + 0x5c))();
          pIStack_ecc = (ISFMixer *)&stack0xfffff158;
          pIStack_ed0 = DAT_012b09c8;
          pIStack_ed4 = (ISFMixer *)0x117d36d;
          (**(code **)(*(int *)DAT_012b09c8 + 0x204))();
          if (pIVar6 == (ISFMixerIn *)0x0) break;
          pIStack_ed8 = (ISFMixer *)&pIStack_ec0;
          pIStack_ed4 = (ISFMixer *)0x0;
          pIStack_edc = (ISFMixer *)0x1;
          pIStack_ee4 = (ISFMixer *)0x117d387;
          pIStack_ee0 = pIVar6;
          iVar3 = (**(code **)(*(int *)pIVar6 + 0xc))();
          if (iVar3 == 0) {
            puVar13 = auStack_878;
            do {
              pIStack_ee4 = (ISFMixer *)&stack0xfffff154;
              pIStack_ee8 = pIStack_ed0;
              pIStack_eec = (ISFMixer *)0x117d3a1;
              (**(code **)(*(int *)pIStack_ed0 + 0x20))();
              pIStack_eec = pIStack_ed8;
              pIStack_ef0 = (ISFMixer *)0x117d3ab;
              iVar3 = (**(code **)(*(int *)pIStack_ed8 + 0x28))();
              pIStack_ef0 = pIStack_edc;
              uStack_ef4 = 0x117d3bc;
              (**(code **)(*(int *)pIStack_edc + 8))();
              if (pIVar16 == in_stack_fffff154) {
                if ((uint)(iVar3 == 0) != *puVar13) {
                  bVar1 = true;
                  break;
                }
                puVar13 = puVar13 + 1;
              }
              pIStack_ee8 = (ISFMixer *)&pIStack_ed0;
              pIStack_ee4 = (ISFMixer *)0x0;
              pIStack_eec = (ISFMixer *)0x1;
              pIStack_ef0 = pIStack_ec0;
              uStack_ef4 = 0x117d3e2;
              iVar3 = (**(code **)(*(int *)pIStack_ec0 + 0xc))();
            } while (iVar3 == 0);
          }
          pIStack_ee4 = pIStack_ec0;
          pIStack_ee8 = (ISFMixer *)0x117d3f7;
          (**(code **)(*(int *)pIStack_ec0 + 8))();
          if (!bVar1) break;
          if (piStack_ebc == (int *)0x0) {
            pIStack_ed4 = (ISFMixer *)0x117d40c;
            Mixer_Unprepare();
          }
          pIStack_ed4 = (ISFMixer *)&stack0xfffff150;
          pIStack_ed8 = DAT_012b09c8;
          piStack_ebc = (int *)0x1;
          pIStack_edc = (ISFMixer *)0x117d427;
          (**(code **)(*(int *)DAT_012b09c8 + 0x204))();
          pIStack_ec4 = pIVar17;
          ppIStack_ec8 = (ISFMixer **)piVar19;
          pIVar17 = pIStack_ec4;
          if (pIStack_ec4 != (ISFMixer *)0x0) {
            pIVar10 = (ISFMixerIn *)0x0;
            piStack_ebc = (int *)&stack0xfffff15c;
            pIStack_ec0 = (ISFMixer *)0x1;
            ppIStack_ec8 = (ISFMixer **)0x117d443;
            iVar3 = (**(code **)(*(int *)pIStack_ec4 + 0xc))();
            pIVar2 = pIStack_e8c;
            ppIStack_ec8 = (ISFMixer **)piVar19;
            if (iVar3 == 0) {
              puVar14 = auStack_85c;
              pIStack_ecc = pIVar15;
              do {
                ppIStack_ec8 = &pIStack_e90;
                pIStack_ed0 = (ISFMixer *)0x117d465;
                pIVar15 = pIStack_ecc;
                (**(code **)(*(int *)pIStack_ecc + 0x20))();
                if ((pIVar2 == pIVar18) &&
                   (pIStack_ed0 = (ISFMixer *)*puVar14, pIStack_ed0 != (ISFMixer *)0x0)) {
                  iVar3 = *piStack_ebc;
LAB_0117d47b:
                  pIStack_ed4 = (ISFMixer *)piStack_ebc;
                  pIStack_ed8 = (ISFMixer *)0x117d47e;
                  (**(code **)(iVar3 + 0x24))();
                  pIStack_ed8 = (ISFMixer *)0x0;
                  pIStack_edc = (ISFMixer *)0x0;
                  pIStack_ee4 = pIStack_ec4;
                  pIStack_ee8 = (ISFMixer *)0x117d48d;
                  pIStack_ee0 = pIVar10;
                  (**(code **)(*(int *)pIStack_ec4 + 0x2c))();
                  pIVar10 = pIVar10 + 1;
                }
                else {
                  if ((pIVar18 == (ISFMixerIn *)0x3) && (DAT_012b0adc != 0)) {
                    pIStack_ed0 = (ISFMixer *)0x1;
                    iVar3 = *piStack_ebc;
                    goto LAB_0117d47b;
                  }
                  pIStack_ed0 = (ISFMixer *)0x0;
                  pIStack_ed4 = (ISFMixer *)piStack_ebc;
                  pIStack_ed8 = (ISFMixer *)0x117d4b5;
                  (**(code **)(*piStack_ebc + 0x24))();
                  pIStack_ed8 = (ISFMixer *)0x0;
                  pIStack_edc = (ISFMixer *)0x0;
                  pIStack_ee0 = (ISFMixerIn *)0xffffffff;
                  pIStack_ee4 = pIStack_ec4;
                  pIStack_ee8 = (ISFMixer *)0x117d4c5;
                  (**(code **)(*(int *)pIStack_ec4 + 0x2c))();
                }
                if (pIVar2 == pIVar6) {
                  puVar14 = puVar14 + 1;
                }
                pIStack_ee8 = pIStack_ed4;
                pIStack_eec = (ISFMixer *)0x117d4d8;
                (**(code **)(*(int *)pIStack_ed4 + 8))();
                pIStack_ef0 = (ISFMixer *)&pIStack_ed8;
                pIStack_eec = (ISFMixer *)0x0;
                uStack_ef4 = 1;
                iVar3 = (**(code **)(*ppIStack_ec8 + 0xc))(ppIStack_ec8);
                pIStack_ecc = pIVar15;
                ppIStack_ec8 = (ISFMixer **)piVar19;
              } while (iVar3 == 0);
            }
            pIStack_ecc = (ISFMixer *)0x117d4fd;
            (**(code **)((int)*ppIStack_ec8 + 8))();
          }
          unaff_EDI = (ISFMixerIn *)0x1;
          piVar19 = (int *)ppIStack_ec8;
        }
        if (unaff_EDI != (ISFMixerIn *)0x0) {
          pIStack_ed4 = DAT_012b09c8;
          pIStack_ed8 = (ISFMixer *)0x117d516;
          (**(code **)(*(int *)DAT_012b09c8 + 0x14))();
        }
        if (piStack_ebc != (int *)0x0) {
          pIStack_ed4 = (ISFMixer *)0x117d527;
          in_stack_fffff154 = (ISFMixer *)Mixer_Prepare();
        }
        goto LAB_0117d7b3;
      }
    }
    else if ((local_e54 == uVar21) && (iVar3 = lstrcmpA((LPCSTR)local_e30,aCStack_d2c), iVar3 == 0))
    {
      pIStack_e7c = (ISFMixer *)0x0;
      (**(code **)(*(int *)DAT_012b09c8 + 0x10))();
      if (pIStack_e7c != (ISFMixer *)0x0) {
        Mixer_Unprepare();
        (**(code **)(*(int *)pIStack_e7c + 0x18))();
        (**(code **)(*(int *)pIStack_e80 + 8))();
        pIStack_e7c = (ISFMixer *)0x0;
      }
    }
    pIVar17 = (ISFMixer *)CONCAT22(uStack_e56,uStack_e58);
    unaff_EDI = (ISFMixerIn *)&stack0xfffff19c;
    in_stack_fffff154 = (ISFMixer *)0x117d5a2;
    iVar3 = FUN_011839e0();
    pIVar15 = DAT_012b09c8;
    if (iVar3 < 0) {
      pIStack_e7c = (ISFMixer *)0x0;
      (**(code **)(*(int *)DAT_012b09c8 + 0x10))();
      if (piStack_ebc != (int *)0x0) {
        pIStack_ed4 = (ISFMixer *)piStack_ebc;
        pIStack_ed8 = (ISFMixer *)0x117d760;
        (**(code **)(*piStack_ebc + 0x14))();
        pIStack_ed8 = pIStack_ec0;
        pIStack_edc = (ISFMixer *)0x117d76a;
        (**(code **)(*(int *)pIStack_ec0 + 8))();
      }
    }
    else {
      (**(code **)(*(int *)DAT_012b09c8 + 0x60))();
      piVar7 = aiStack_440 + 3;
      (**(code **)(*piVar19 + 0x60))();
      pIVar6 = (ISFMixerIn *)0x0;
      if (pIStack_e8c != (ISFMixerIn *)0x0) {
        do {
          if ((pIVar18 <= pIVar6) || ((*(uint *)(aIStack_c40 + (int)pIVar6 * 4) & 0x80000000) == 0))
          {
            *(int *)(aIStack_c40 + (int)pIVar6 * 4) = aiStack_440[(int)pIVar6];
          }
          pIVar6 = pIVar6 + 1;
        } while (pIVar6 < pIStack_e8c);
      }
      pIVar6 = aIStack_c40;
      pIVar16 = pIStack_e7c;
      (**(code **)(*(int *)pIStack_e7c + 100))();
      piStack_ebc = aiStack_84c;
      pIStack_ec0 = (ISFMixer *)0x0;
      ppIStack_ec8 = (ISFMixer **)DAT_012b09c4;
      pIStack_ecc = (ISFMixer *)0x117d63d;
      pIStack_ec4 = pIVar17;
      (**(code **)(*DAT_012b09c4 + 0x5c))();
      pIStack_ecc = (ISFMixer *)&stack0xfffff158;
      pIStack_ed0 = pIVar15;
      pIStack_ed4 = (ISFMixer *)0x117d64f;
      (**(code **)(*(int *)pIVar15 + 0x204))();
      pIStack_ed4 = (ISFMixer *)piVar7;
      if (pIVar6 != (ISFMixerIn *)0x0) {
        pIStack_ed8 = (ISFMixer *)&pIStack_ec0;
        pIStack_ed4 = (ISFMixer *)0x0;
        pIStack_edc = (ISFMixer *)0x1;
        iVar11 = 0;
        pIStack_ee4 = (ISFMixer *)0x117d66b;
        pIStack_ee0 = pIVar6;
        iVar3 = (**(code **)(*(int *)pIVar6 + 0xc))();
        if (iVar3 == 0) {
          puVar13 = auStack_878;
          do {
            pIStack_ee4 = (ISFMixer *)&stack0xfffff154;
            pIStack_ee8 = pIStack_ed0;
            pIStack_eec = (ISFMixer *)0x117d689;
            (**(code **)(*(int *)pIStack_ed0 + 0x20))();
            if ((pIVar17 == pIVar16) &&
               (pIStack_eec = (ISFMixer *)*puVar13, pIStack_eec != (ISFMixer *)0x0)) {
              iVar3 = *(int *)pIStack_ed8;
LAB_0117d69f:
              pIStack_ef0 = pIStack_ed8;
              uStack_ef4 = 0x117d6a2;
              (**(code **)(iVar3 + 0x24))();
              uStack_ef4 = 0;
              (**(code **)(*(int *)pIStack_ee0 + 0x2c))(pIStack_ee0,iVar11,0);
              iVar11 = iVar11 + 1;
            }
            else {
              if ((pIVar16 == (ISFMixer *)0x3) && (DAT_012b0adc != 0)) {
                pIStack_eec = (ISFMixer *)0x1;
                iVar3 = *(int *)pIStack_ed8;
                goto LAB_0117d69f;
              }
              pIStack_eec = (ISFMixer *)0x0;
              pIStack_ef0 = pIStack_ed8;
              uStack_ef4 = 0x117d6d5;
              (**(code **)(*(int *)pIStack_ed8 + 0x24))();
              uStack_ef4 = 0;
              (**(code **)(*(int *)pIStack_ee0 + 0x2c))(pIStack_ee0,0xffffffff,0);
            }
            if (pIVar17 == pIStack_ecc) {
              puVar13 = puVar13 + 1;
            }
            (**(code **)(*(int *)pIStack_ef0 + 8))(pIStack_ef0);
            iVar3 = (**(code **)(*(int *)pIStack_ee4 + 0xc))(pIStack_ee4,1,&uStack_ef4,0);
          } while (iVar3 == 0);
        }
        pIStack_ee4 = pIStack_ec0;
        pIStack_ee8 = (ISFMixer *)0x117d71a;
        (**(code **)(*(int *)pIStack_ec0 + 8))();
        pIStack_ed4 = (ISFMixer *)piVar7;
      }
      pIStack_ed8 = (ISFMixer *)0x117d724;
      in_stack_fffff154 = (ISFMixer *)FUN_01183b50();
      pIStack_ed8 = (ISFMixer *)0x117d732;
      (**(code **)(*(int *)pIStack_ed4 + 8))();
      unaff_EDI = (ISFMixerIn *)0x1;
    }
  }
LAB_0117d7b3:
  if ((-1 < (int)in_stack_fffff154) && (unaff_EDI != (ISFMixerIn *)0x0)) {
    pIStack_ed4 = (ISFMixer *)0x117d7c4;
    Mixer_UpdateAll();
  }
  return (long)in_stack_fffff154;
}


