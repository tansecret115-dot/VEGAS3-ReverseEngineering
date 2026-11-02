/* Module: mp3plug.dll
   Function: FUN_5f6d97e0
   Address: 5f6d97e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl
FUN_5f6d97e0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10)

{
  int *piVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  
  iVar4 = 0x32c;
  piVar1 = FUN_5f6d9720(1,0x32c);
  if (piVar1 == (int *)0x0) {
    ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75cb30,(char *)0x3f,(undefined *)0x0
                           ,s_out_of_memory_5f75c330);
  }
  else {
    piVar2 = FUN_5f6e5db0(8000,iVar4);
    piVar1[0x44] = (int)piVar2;
    piVar2 = FUN_5f6e5db0(64000,iVar4);
    piVar1[0x45] = (int)piVar2;
    piVar2 = FUN_5f6e5db0(64000,iVar4);
    piVar1[0x46] = (int)piVar2;
    if (((piVar1[0x44] == 0) || (piVar1[0x45] == 0)) || (piVar1[0x46] == 0)) {
      ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75cb30,(char *)0x4f,
                             (undefined *)0x0,s_CreateBitBuffer_failed___5f75cb70);
    }
    else {
      if (param_2 < 0x5dc1) {
        if (param_2 < 0x2ee1) {
          *piVar1 = 2;
          if (param_2 == 8000) {
            piVar1[2] = 2;
          }
          else if (param_2 == 0x2b11) {
            piVar1[2] = 0;
          }
          else {
            if (param_2 != 12000) {
              ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75cb30,(char *)0x80,
                                     (undefined *)0x0,s_invalid_samplerate_5f75cb90);
              goto LAB_5f6d996f;
            }
            piVar1[2] = 1;
          }
        }
        else {
          *piVar1 = 1;
          if (param_2 == 16000) {
            piVar1[2] = 2;
          }
          else if (param_2 == 0x5622) {
            piVar1[2] = 0;
          }
          else {
            if (param_2 != 24000) {
              ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75cb30,(char *)0x70,
                                     (undefined *)0x0,s_invalid_samplerate_5f75cb90);
              goto LAB_5f6d996f;
            }
            piVar1[2] = 1;
          }
        }
      }
      else {
        *piVar1 = 0;
        if (param_2 == 32000) {
          piVar1[2] = 2;
        }
        else if (param_2 == 0xac44) {
          piVar1[2] = 0;
        }
        else {
          if (param_2 != 48000) {
            ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75cb30,(char *)0x60,
                                   (undefined *)0x0,s_invalid_samplerate_5f75cb90);
            goto LAB_5f6d996f;
          }
          piVar1[2] = 1;
        }
      }
      piVar1[1] = param_2;
      piVar1[4] = (uint)(param_5 != 0);
      piVar1[3] = param_10;
      piVar1[0xc] = (uint)(param_6 != 0);
      piVar1[0xd] = (uint)(param_7 != 0);
      piVar1[0xf] = param_9;
      piVar1[0xe] = (uint)(param_8 != 0);
      ppuVar3 = FUN_5f6e68f0((int)(piVar1 + 0x2f),param_3,param_2,*piVar1,1);
      if (ppuVar3 == (undefined **)0x0) {
        piVar1[5] = 0x20;
        if (param_5 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = 0x10;
        }
        piVar1[8] = iVar4;
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          iVar4 = piVar1[3];
          piVar1[0xb] = 2;
          if (((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) {
            piVar1[6] = 0x100;
            piVar1[10] = 2;
          }
          else {
            if (iVar4 != 3) {
              ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75cb30,(char *)0xa8,
                                     (undefined *)0x0,s_erroneous_stereo_mode_5f75cbb0);
              goto LAB_5f6d996f;
            }
            piVar1[6] = 0x88;
            piVar1[10] = 1;
          }
        }
        else if ((iVar4 == 1) || (iVar4 == 2)) {
          iVar4 = piVar1[3];
          piVar1[0xb] = 1;
          if ((iVar4 == 0) || ((iVar4 == 1 || (iVar4 == 2)))) {
            piVar1[6] = 0x88;
            piVar1[10] = 2;
          }
          else {
            if (iVar4 != 3) {
              ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75cb30,(char *)0xbb,
                                     (undefined *)0x0,s_erroneous_stereo_mode_5f75cbb0);
              goto LAB_5f6d996f;
            }
            piVar1[6] = 0x48;
            piVar1[10] = 1;
          }
        }
        piVar1[9] = param_4;
        piVar1[7] = piVar1[6] + piVar1[8] + piVar1[5];
        FUN_5f6e6ef0(piVar1 + 0x47,piVar1[0x44],piVar1[0x45]);
        piVar1[0x43] = 0;
        ppuVar3 = (undefined **)0x0;
        goto LAB_5f6d997c;
      }
      ppuVar3 = (undefined **)
                FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75cb30,0x93,0,(int)ppuVar3);
    }
  }
LAB_5f6d996f:
  if (ppuVar3 != (undefined **)0x0) {
    FUN_5f6daa24();
    piVar1 = (int *)0x0;
  }
LAB_5f6d997c:
  *param_1 = piVar1;
  return ppuVar3;
}


