/* Module: vegas30k.dll
   Function: Mixer_GetFXSendCfg
   Address: 0117be60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetFXSendCfg(struct _tfxsend *,unsigned long) */

long Mixer_GetFXSendCfg(_tfxsend *param_1,ulong param_2)

{
  LPWSTR lpWideCharStr;
  SIZE_T dwBytes;
  int iVar1;
  int iVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  ISFGraphBuilder **ppIVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  ISFMixerIn *pIVar8;
  int *piStack_340;
  ISFGraphBuilder *local_33c;
  int iStack_338;
  int aiStack_334 [5];
  int aiStack_320 [68];
  WCHAR aWStack_210 [4];
  ISFMixerIn local_208 [516];
  LPSTR pCStack_4;
  
                    /* 0x17be60  176  ?Mixer_GetFXSendCfg@@YGJPAU_tfxsend@@K@Z */
  local_33c = (ISFGraphBuilder *)0x0;
  iVar1 = Mixer_GetDeviceGraph(&local_33c,4,param_2);
  if (iVar1 == 0) {
    aiStack_334[1] = 0;
    aiStack_334[2] = 0;
    iVar1 = _SfGraph_SaveToMem_12();
    if (-1 < iVar1) {
      pIVar8 = local_208;
      (**(code **)(*(int *)local_33c + 0x24))();
      if ((&stack0x00000000 == (undefined1 *)0x210) || (aWStack_210[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_210,-1,pCStack_4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (pCStack_4 != (LPSTR)0x0) {
        *pCStack_4 = '\0';
      }
      pCStack_4[0x103] = '\0';
      *(int *)(pCStack_4 + 0x108) = iStack_338;
      *(int *)(pCStack_4 + 0x10c) = aiStack_334[0];
      piVar5 = (int *)param_2;
      (**(code **)(*DAT_012b09c8 + 0x98))();
      *(int *)(pCStack_4 + 0x104) = aiStack_334[3];
      Mixer_GetDevice((ISFMixerIn **)&stack0xfffffcac,4,param_2);
      piVar7 = aiStack_320;
      (**(code **)(*(int *)pIVar8 + 0xc))();
      iVar1 = lstrlenA((LPCSTR)(aiStack_334 + 2));
      (**(code **)(*piVar5 + 0x20))();
      iVar2 = lstrlenA((LPCSTR)&iStack_338);
      aiStack_334[0] = (**(code **)(*piVar7 + 0x98))(piVar7,&stack0xfffffcbc,0);
      dwBytes = iVar1 * 2 + iVar2 * 2 + 0x70 + iStack_338;
      *(SIZE_T *)(pCStack_4 + 0x114) = dwBytes;
      hMem = GlobalAlloc(2,dwBytes);
      puVar3 = GlobalLock(hMem);
      *(undefined4 **)(pCStack_4 + 0x110) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        pCStack_4[0x114] = '\0';
        pCStack_4[0x115] = '\0';
        pCStack_4[0x116] = '\0';
        pCStack_4[0x117] = '\0';
        aiStack_334[0] = -0x7ff8fff2;
        iVar1 = aiStack_334[0];
      }
      else {
        *puVar3 = DAT_011ea580;
        puVar3[1] = DAT_011ea584;
        puVar3[2] = DAT_011ea588;
        puVar3[3] = DAT_011ea58c;
        (**(code **)(*piStack_340 + 0x5c))();
        (**(code **)(*unaff_ESI + 0x78))();
        piVar7 = aiStack_334;
        piVar5 = aiStack_320;
        piVar6 = aiStack_334 + 2;
        (**(code **)(*unaff_EDI + 0x80))();
        puVar3[0xc] = unaff_EDI;
        puVar3[0xd] = unaff_EBX;
        puVar3[0xe] = iStack_338;
        puVar3[0xf] = unaff_EBP;
        puVar3[0x10] = unaff_ESI;
        iVar1 = (**(code **)(*piVar7 + 0x54))();
        puVar3[0x18] = (uint)(iVar1 == 0);
        iVar1 = (**(code **)(*piVar5 + 0x48))();
        ppIVar4 = &local_33c;
        puVar3[0x19] = (uint)(iVar1 == 0);
        (**(code **)(*piVar6 + 0xc))(piVar6,ppIVar4,0x104);
        iVar1 = lstrlenA(&stack0xfffffcb8);
        MultiByteToWideChar(0,1,&stack0xfffffcb8,-1,(LPWSTR)(puVar3 + 0x1a),iVar1 + 1);
        lpWideCharStr = (LPWSTR)((int)(puVar3 + 0x1a) + (iVar1 + 1) * 2);
        lpWideCharStr[-1] = L'\0';
        (**(code **)(*piVar7 + 0x20))(piVar7,&stack0xfffffcb8,0x104);
        iVar1 = lstrlenA(&stack0xfffffcac);
        MultiByteToWideChar(0,1,&stack0xfffffcac,-1,lpWideCharStr,iVar1 + 1);
        lpWideCharStr[iVar1] = L'\0';
        *(int **)(lpWideCharStr + iVar1 + 1) = piVar5;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*ppIVar4 + 0x98))
                    (ppIVar4,&stack0xfffffca0,lpWideCharStr + iVar1 + 3,&stack0xfffffc80);
        }
        (**(code **)(*ppIVar4 + 8))(ppIVar4);
        iVar1 = aiStack_334[0];
      }
    }
    (**(code **)(*(int *)local_33c + 8))();
  }
  return iVar1;
}


