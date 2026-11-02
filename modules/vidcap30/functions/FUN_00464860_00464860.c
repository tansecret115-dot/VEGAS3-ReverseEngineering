/* Module: vidcap30.exe
   Function: FUN_00464860
   Address: 00464860
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00464860(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  int *piVar5;
  undefined4 local_a7c;
  int local_a78;
  undefined4 local_a74;
  undefined4 local_a70;
  undefined4 local_a6c;
  undefined4 local_a68;
  undefined4 local_a64;
  undefined4 local_a60;
  undefined1 local_a5c [12];
  int aiStack_a50 [3];
  undefined1 local_a44 [28];
  CHAR local_a28 [176];
  uchar auStack_978 [332];
  undefined1 auStack_82c [12];
  WCHAR local_820 [254];
  undefined1 auStack_624 [10];
  undefined2 local_61a;
  WCHAR local_618 [254];
  undefined1 auStack_41c [10];
  undefined2 local_412;
  WCHAR local_410 [218];
  WCHAR aWStack_25c [41];
  undefined2 local_20a;
  undefined2 uStack_56;
  
  iVar3 = DAT_005bba3c;
  iVar4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    local_a6c = *(undefined4 *)(DAT_005bba3c + 0x34);
    local_a70 = *(undefined4 *)(DAT_005bba3c + 0x38);
    local_a74 = *(undefined4 *)(DAT_005bba3c + 0x30);
    local_a68 = *(undefined4 *)(DAT_005bba3c + 0x2c);
    local_a78 = param_1;
    iVar4 = FUN_0056f620(local_a44,local_a5c);
    if (-1 < iVar4) {
      local_a64 = *(undefined4 *)(iVar3 + 0xc04);
      local_a60 = *(undefined4 *)(iVar3 + 0x800);
      uVar1 = *(undefined4 *)(iVar3 + 0x678);
      iVar4 = FUN_0056f530(local_a28,0x104);
      if (-1 < iVar4) {
        MultiByteToWideChar(0,1,local_a28,-1,local_618,0x104);
        local_412 = 0;
        iVar4 = FUN_0056f5d0(local_a28,0x104);
        if (-1 < iVar4) {
          MultiByteToWideChar(0,1,local_a28,-1,local_410,0x104);
          local_20a = 0;
          iVar4 = FUN_0056f580(local_a28,0x104);
          if (-1 < iVar4) {
            MultiByteToWideChar(0,1,local_a28,-1,local_820,0x104);
            local_61a = 0;
            uVar2 = *(undefined4 *)(iVar3 + 0x7cc);
            local_a7c = 0;
            iVar4 = (**(code **)**(undefined4 **)(local_a78 + 4))
                              (*(undefined4 **)(local_a78 + 4),&DAT_0058c718,&local_a7c);
            if (-1 < iVar4) {
              piVar5 = aiStack_a50;
              iVar4 = (**(code **)(*unaff_ESI + 0x14))
                                (unaff_ESI,auStack_624,auStack_41c,auStack_82c,piVar5,&local_a68,
                                 unaff_EBX,local_a78,local_a7c,local_a74,uVar1,local_a6c,local_a70,
                                 DAT_005bba30,0,DAT_005bba34,uVar2,0);
              if (-1 < iVar4) {
                iVar4 = FUN_00464a90();
                if (-1 < iVar4) {
                  _mbscpy(auStack_978,(uchar *)"Version 3.0 (Build 63)");
                  MultiByteToWideChar(0,1,(LPCSTR)auStack_978,-1,aWStack_25c,0x104);
                  uStack_56 = 0;
                  (**(code **)(*piVar5 + 0x1c))(piVar5,3,0,0x3f,aWStack_25c);
                }
              }
              (**(code **)(*piVar5 + 8))(piVar5);
            }
          }
        }
      }
    }
  }
  return iVar4;
}


