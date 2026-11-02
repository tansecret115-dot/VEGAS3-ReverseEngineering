/* Module: vegas30k.dll
   Function: Mixer_SetFXSendCfg
   Address: 0117c7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall Mixer_SetFXSendCfg(struct _tfxsend *,unsigned long,int) */

long Mixer_SetFXSendCfg(_tfxsend *param_1,ulong param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  ISFMixerIn *pIVar3;
  int iVar4;
  uint uVar5;
  LPCWSTR pWVar6;
  int *unaff_ESI;
  bool bVar7;
  ISFMixerIn *pIVar8;
  int *piStack_158;
  int *piStack_154;
  int *piStack_150;
  int *piStack_14c;
  int *piVar9;
  float fVar10;
  int *piVar11;
  float fVar12;
  ISFMixerIn *local_12c [3];
  long local_120;
  int local_114 [49];
  undefined1 uStack_4d;
  undefined1 uStack_45;
  
                    /* 0x17c7b0  229  ?Mixer_SetFXSendCfg@@YGJPAU_tfxsend@@KH@Z */
  local_120 = 0;
  if ((*(int *)(param_1 + 0x108) == 0) || (*(int *)(param_1 + 0x10c) == 0)) {
    return -0x7fffbffb;
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    piVar1 = *(int **)(param_1 + 0x110);
    local_114[0] = *piVar1;
    local_114[1] = piVar1[1];
    local_114[2] = piVar1[2];
    iVar4 = 4;
    bVar7 = true;
    local_114[3] = piVar1[3];
    piVar9 = &DAT_011ea580;
    piVar11 = local_114;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *piVar9 == *piVar11;
      piVar9 = piVar9 + 1;
      piVar11 = piVar11 + 1;
    } while (bVar7);
    if (bVar7) {
      piStack_14c = (int *)0x117c843;
      Mixer_AddFXBus((ISFMixer *)0x0,*(ulong *)(param_1 + 0x104),param_2);
      local_12c[0] = (ISFMixerIn *)0x0;
      piStack_14c = (int *)0x117c858;
      lVar2 = Mixer_GetDevice(local_12c,4,param_2);
      if (lVar2 != 0) {
        return lVar2;
      }
      piVar9 = *(int **)(param_1 + 0x10c);
      piStack_14c = (int *)0x117c87b;
      pIVar3 = (ISFMixerIn *)(**(code **)(*(int *)local_12c[0] + 0x10c))();
      piStack_14c = piVar1 + 4;
      piStack_154 = (int *)0x117c88d;
      piStack_150 = unaff_ESI;
      pIVar8 = local_12c[0];
      piStack_158 = piVar9;
      local_12c[0] = pIVar3;
      (**(code **)(*unaff_ESI + 0x58))();
      piStack_154 = piVar1 + 8;
      (**(code **)(*piStack_158 + 0x74))();
      if (_DAT_011ea5ec <= (float)piVar1[0xc]) {
        if ((float)piVar1[0xc] <= _DAT_011dad68) {
          fVar10 = (float)piVar1[0xc];
        }
        else {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = -1.0;
      }
      if (_DAT_011ea5ec <= (float)piVar1[0xd]) {
        if ((float)piVar1[0xd] <= _DAT_011dad68) {
          piVar9 = (int *)piVar1[0xd];
        }
        else {
          piVar9 = (int *)0x3f800000;
        }
      }
      else {
        piVar9 = (int *)0xbf800000;
      }
      if (_DAT_011dd160 <= (float)piVar1[0xe]) {
        if ((float)piVar1[0xe] <= _DAT_011dad68) {
          fVar12 = (float)piVar1[0xe];
        }
        else {
          fVar12 = 1.0;
        }
      }
      else {
        fVar12 = 0.0;
      }
      if (_DAT_011dd160 <= (float)piVar1[0xf]) {
        if ((float)piVar1[0xf] <= _DAT_011dad68) {
          piVar11 = (int *)piVar1[0xf];
        }
        else {
          piVar11 = (int *)0x3f800000;
        }
      }
      else {
        piVar11 = (int *)0x0;
      }
      uVar5 = piVar1[0x10];
      if (0xffff < uVar5) {
        uVar5 = 0xffff;
      }
      (**(code **)(*(int *)pIVar8 + 0x7c))(pIVar8,fVar10,piVar9,fVar12,piVar11,uVar5);
      (**(code **)(*piVar11 + 0x50))(piVar11,piVar1[0x18]);
      (**(code **)(*piVar9 + 0x44))(piVar9,piVar1[0x19]);
      pWVar6 = (LPCWSTR)(piVar1 + 0x1a);
      if ((pWVar6 == (LPCWSTR)0x0) || (*pWVar6 != L'\0')) {
        WideCharToMultiByte(0,0,pWVar6,-1,&stack0xfffffeb8,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      uStack_45 = 0;
      (**(code **)(*(int *)pIVar8 + 0x10))(pIVar8,&stack0xfffffeb8);
      iVar4 = lstrlenA((LPCSTR)&piStack_150);
      pWVar6 = (LPCWSTR)((int)piVar1 + iVar4 * 2 + 0x6a);
      if ((pWVar6 == (LPCWSTR)0x0) || (*pWVar6 != L'\0')) {
        WideCharToMultiByte(0,0,pWVar6,-1,(LPSTR)&piStack_150,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x150) {
        piStack_150 = (int *)((uint)piStack_150 & 0xffffff00);
      }
      uStack_4d = 0;
      (**(code **)(*piVar11 + 0x24))(piVar11,&piStack_150);
      iVar4 = lstrlenA((LPCSTR)&piStack_158);
      if (*(int *)(pWVar6 + iVar4 + 1) != 0) {
        (**(code **)(*piVar9 + 0x94))
                  (piVar9,param_2,pWVar6 + iVar4 + 3,*(int *)(pWVar6 + iVar4 + 1));
      }
      (**(code **)(*piVar9 + 8))(piVar9);
      Mixer_UpdateAll();
      return (long)piVar11;
    }
    piStack_14c = (int *)0x117cae2;
    local_120 = Mixer_SetFXSendCfgPrev(param_1,param_2,param_3);
  }
  return local_120;
}


