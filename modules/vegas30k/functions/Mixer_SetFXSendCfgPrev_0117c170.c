/* Module: vegas30k.dll
   Function: Mixer_SetFXSendCfgPrev
   Address: 0117c170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall Mixer_SetFXSendCfgPrev(struct _tfxsend *,unsigned long,int) */

long Mixer_SetFXSendCfgPrev(_tfxsend *param_1,ulong param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  LPCWSTR pWVar5;
  ISFMixerIn *unaff_EDI;
  int *piVar6;
  bool bVar7;
  int *in_stack_fffffe88;
  ISFMixerIn *pIVar8;
  ISFMixerIn *pIVar9;
  ISFMixerIn *pIStack_150;
  ISFMixerIn *pIStack_148;
  int *piVar10;
  float fVar11;
  float fVar12;
  int *piVar13;
  float fVar14;
  ISFMixerIn *local_12c;
  long lStack_128;
  undefined4 uStack_124;
  int aiStack_120 [4];
  CHAR aCStack_110 [195];
  undefined1 uStack_4d;
  undefined1 uStack_45;
  
                    /* 0x17c170  230  ?Mixer_SetFXSendCfgPrev@@YGJPAU_tfxsend@@KH@Z */
  if ((*(int *)(param_1 + 0x108) == 0) || (*(int *)(param_1 + 0x10c) == 0)) {
    lVar2 = -0x7fffbffb;
  }
  else {
    pIStack_148 = (ISFMixerIn *)0x117c1af;
    Mixer_AddFXBus((ISFMixer *)0x0,*(ulong *)(param_1 + 0x104),param_2);
    local_12c = (ISFMixerIn *)0x0;
    pIStack_148 = (ISFMixerIn *)0x117c1c0;
    lVar2 = Mixer_GetDevice(&local_12c,4,param_2);
    if (lVar2 == 0) {
      piVar10 = *(int **)(param_1 + 0x10c);
      pIStack_148 = local_12c;
      uStack_124 = (**(code **)(*(int *)local_12c + 0x10c))();
      if (*(int *)(param_1 + 0x114) != 0) {
        piVar1 = *(int **)(param_1 + 0x110);
        aiStack_120[0] = *piVar1;
        aiStack_120[1] = piVar1[1];
        aiStack_120[2] = piVar1[2];
        bVar7 = true;
        aiStack_120[3] = piVar1[3];
        iVar3 = 4;
        piVar13 = &DAT_011ea570;
        piVar6 = aiStack_120;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *piVar13 == *piVar6;
          piVar13 = piVar13 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar7);
        pIStack_150 = unaff_EDI;
        if (bVar7) {
          (**(code **)(*(int *)unaff_EDI + 0x58))();
          (**(code **)(*piVar10 + 0x74))(piVar10,piVar1 + 8);
          if (_DAT_011ea5ec <= (float)piVar1[0xc]) {
            if ((float)piVar1[0xc] <= _DAT_011dad68) {
              fVar12 = (float)piVar1[0xc];
            }
            else {
              fVar12 = 1.0;
            }
          }
          else {
            fVar12 = -1.0;
          }
          if (_DAT_011ea5ec <= (float)piVar1[0xd]) {
            if ((float)piVar1[0xd] <= _DAT_011dad68) {
              piVar10 = (int *)piVar1[0xd];
            }
            else {
              piVar10 = (int *)0x3f800000;
            }
          }
          else {
            piVar10 = (int *)0xbf800000;
          }
          if (_DAT_011dd160 <= (float)piVar1[0xe]) {
            if ((float)piVar1[0xe] <= _DAT_011dad68) {
              unaff_EDI = (ISFMixerIn *)piVar1[0xe];
            }
            else {
              unaff_EDI = (ISFMixerIn *)0x3f800000;
            }
          }
          else {
            unaff_EDI = (ISFMixerIn *)0x0;
          }
          if (_DAT_011dd160 <= (float)piVar1[0xf]) {
            if ((float)piVar1[0xf] <= _DAT_011dad68) {
              piVar13 = (int *)piVar1[0xf];
            }
            else {
              piVar13 = (int *)0x3f800000;
            }
          }
          else {
            piVar13 = (int *)0x0;
          }
          uVar4 = piVar1[0x10];
          if (0xffff < uVar4) {
            uVar4 = 0xffff;
          }
          pIVar8 = pIStack_148;
          (**(code **)(*(int *)pIStack_148 + 0x7c))
                    (pIStack_148,fVar12,piVar10,unaff_EDI,piVar13,uVar4);
          (**(code **)(*piVar13 + 0x50))(piVar13,piVar1[0x18]);
          (**(code **)(*piVar10 + 0x44))(piVar10,piVar1[0x19]);
          pWVar5 = (LPCWSTR)(piVar1 + 0x1a);
          if ((pWVar5 == (LPCWSTR)0x0) || (*pWVar5 != L'\0')) {
            WideCharToMultiByte(0,0,pWVar5,-1,(LPSTR)&pIStack_148,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x148) {
            pIStack_148 = (ISFMixerIn *)((uint)pIStack_148 & 0xffffff00);
          }
          uStack_45 = 0;
          (**(code **)(*(int *)pIVar8 + 0x10))(pIVar8,&pIStack_148);
          iVar3 = lstrlenA((LPCSTR)&pIStack_150);
          pWVar5 = (LPCWSTR)((int)piVar1 + iVar3 * 2 + 0x6a);
          if ((pWVar5 == (LPCWSTR)0x0) || (*pWVar5 != L'\0')) {
            WideCharToMultiByte(0,0,pWVar5,-1,(LPSTR)&pIStack_150,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x150) {
            pIStack_150 = (ISFMixerIn *)((uint)pIStack_150 & 0xffffff00);
          }
          uStack_4d = 0;
          (**(code **)(*piVar13 + 0x24))(piVar13,&pIStack_150);
          pIStack_150 = (ISFMixerIn *)0x117c430;
          lstrlenA(aCStack_110);
        }
        else {
          iVar3 = 4;
          bVar7 = true;
          piVar13 = &DAT_011ea560;
          piVar6 = aiStack_120;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar7 = *piVar13 == *piVar6;
            piVar13 = piVar13 + 1;
            piVar6 = piVar6 + 1;
          } while (bVar7);
          if (bVar7) {
            (**(code **)(*(int *)unaff_EDI + 0x58))();
            (**(code **)(*piVar10 + 0x74))(piVar10,piVar1 + 8);
            if (_DAT_011ea5ec <= (float)piVar1[0xc]) {
              if ((float)piVar1[0xc] <= _DAT_011dad68) {
                fVar12 = (float)piVar1[0xc];
              }
              else {
                fVar12 = 1.0;
              }
            }
            else {
              fVar12 = -1.0;
            }
            if (_DAT_011ea5ec <= (float)piVar1[0xd]) {
              if ((float)piVar1[0xd] <= _DAT_011dad68) {
                unaff_EDI = (ISFMixerIn *)piVar1[0xd];
              }
              else {
                unaff_EDI = (ISFMixerIn *)0x3f800000;
              }
            }
            else {
              unaff_EDI = (ISFMixerIn *)0xbf800000;
            }
            if (_DAT_011dd160 <= (float)piVar1[0xe]) {
              if ((float)piVar1[0xe] <= _DAT_011dad68) {
                fVar11 = (float)piVar1[0xe];
              }
              else {
                fVar11 = 1.0;
              }
            }
            else {
              fVar11 = 0.0;
            }
            if (_DAT_011dd160 <= (float)piVar1[0xf]) {
              if ((float)piVar1[0xf] <= _DAT_011dad68) {
                in_stack_fffffe88 = (int *)piVar1[0xf];
              }
              else {
                in_stack_fffffe88 = (int *)0x3f800000;
              }
            }
            else {
              in_stack_fffffe88 = (int *)0x0;
            }
            uVar4 = piVar1[0x10];
            if (0xffff < uVar4) {
              uVar4 = 0xffff;
            }
            pIVar8 = pIStack_148;
            pIVar9 = unaff_EDI;
            (**(code **)(*(int *)pIStack_148 + 0x7c))
                      (pIStack_148,fVar12,unaff_EDI,fVar11,in_stack_fffffe88,uVar4);
            (**(code **)(*in_stack_fffffe88 + 0x50))(in_stack_fffffe88,piVar1[0x18]);
            piVar10 = piVar1 + 0x19;
            (**(code **)(*(int *)pIVar9 + 0x44))(pIVar9,piVar1[0x19]);
          }
          else {
            (**(code **)(*(int *)unaff_EDI + 0x58))();
            if (_DAT_011ea5ec <= (float)piVar1[4]) {
              if ((float)piVar1[4] <= _DAT_011dad68) {
                fVar12 = (float)piVar1[4];
              }
              else {
                fVar12 = 1.0;
              }
            }
            else {
              fVar12 = -1.0;
            }
            if (_DAT_011ea5ec <= (float)piVar1[5]) {
              if ((float)piVar1[5] <= _DAT_011dad68) {
                fVar11 = (float)piVar1[5];
              }
              else {
                fVar11 = 1.0;
              }
            }
            else {
              fVar11 = -1.0;
            }
            if (_DAT_011dd160 <= (float)piVar1[6]) {
              if ((float)piVar1[6] <= _DAT_011dad68) {
                fVar14 = (float)piVar1[6];
              }
              else {
                fVar14 = 1.0;
              }
            }
            else {
              fVar14 = 0.0;
            }
            if (_DAT_011dd160 <= (float)piVar1[7]) {
              if ((float)piVar1[7] <= _DAT_011dad68) {
                unaff_EDI = (ISFMixerIn *)piVar1[7];
              }
              else {
                unaff_EDI = (ISFMixerIn *)0x3f800000;
              }
            }
            else {
              unaff_EDI = (ISFMixerIn *)0x0;
            }
            uVar4 = piVar1[8];
            if (0xffff < uVar4) {
              uVar4 = 0xffff;
            }
            pIVar8 = unaff_EDI;
            (**(code **)(*piVar10 + 0x7c))(piVar10,fVar12,fVar11,fVar14,unaff_EDI,uVar4);
            piVar10 = piVar1 + 0x10;
            (**(code **)(*(int *)pIVar8 + 0x50))(pIVar8,piVar1[0x10]);
          }
          pWVar5 = (LPCWSTR)(piVar10 + 1);
          if ((pWVar5 == (LPCWSTR)0x0) || (*pWVar5 != L'\0')) {
            WideCharToMultiByte(0,0,pWVar5,-1,(LPSTR)&pIStack_148,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x148) {
            pIStack_148 = (ISFMixerIn *)((uint)pIStack_148 & 0xffffff00);
          }
          uStack_45 = 0;
          (**(code **)(*(int *)pIVar8 + 0x10))(pIVar8,&pIStack_148);
          pWVar5 = (LPCWSTR)(piVar10 + 0x83);
          if ((pWVar5 == (LPCWSTR)0x0) || (*pWVar5 != L'\0')) {
            WideCharToMultiByte(0,0,pWVar5,-1,(LPSTR)&pIStack_150,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x150) {
            pIStack_150 = (ISFMixerIn *)((uint)pIStack_150 & 0xffffff00);
          }
          uStack_4d = 0;
          (**(code **)(*in_stack_fffffe88 + 0x24))(in_stack_fffffe88,&pIStack_150);
        }
      }
      pIStack_150 = (ISFMixerIn *)0x117c785;
      (**(code **)(*(int *)unaff_EDI + 8))();
      pIStack_150 = (ISFMixerIn *)0x117c78a;
      Mixer_UpdateAll();
      return lStack_128;
    }
  }
  return lVar2;
}


