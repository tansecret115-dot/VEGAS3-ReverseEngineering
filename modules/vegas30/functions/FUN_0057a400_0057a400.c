/* Module: vegas30.exe
   Function: FUN_0057a400
   Address: 0057a400
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0057a400(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  int *piVar4;
  undefined4 local_a80;
  undefined4 uStack_a7c;
  undefined4 local_a78;
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
  
  iVar1 = DAT_0064b4f8;
  iVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    local_a70 = *(undefined4 *)(DAT_0064b4f8 + 0x34);
    local_a78 = *(undefined4 *)(DAT_0064b4f8 + 0x38);
    local_a68 = *(undefined4 *)(DAT_0064b4f8 + 0x30);
    local_a6c = *(undefined4 *)(DAT_0064b4f8 + 0x2c);
    iVar2 = FUN_00600400(local_a44,local_a5c);
    if (-1 < iVar2) {
      local_a64 = *(undefined4 *)(iVar1 + 0x678);
      local_a74 = *(undefined4 *)(iVar1 + 0x800);
      local_a60 = *(undefined4 *)(iVar1 + 0xc04);
      iVar2 = FUN_00600310(local_a28,0x104);
      if (-1 < iVar2) {
        MultiByteToWideChar(0,1,local_a28,-1,local_618,0x104);
        local_412 = 0;
        iVar2 = FUN_006003b0(local_a28,0x104);
        if (-1 < iVar2) {
          MultiByteToWideChar(0,1,local_a28,-1,local_410,0x104);
          local_20a = 0;
          iVar2 = FUN_00600360(local_a28,0x104);
          if (-1 < iVar2) {
            MultiByteToWideChar(0,1,local_a28,-1,local_820,0x104);
            local_61a = 0;
            uVar3 = *(undefined4 *)(iVar1 + 0x7cc);
            local_a80 = 0;
            iVar2 = (**(code **)**(undefined4 **)(param_1 + 8))
                              (*(undefined4 **)(param_1 + 8),&DAT_0061be98,&local_a80);
            if (-1 < iVar2) {
              iVar1 = *unaff_ESI;
              uVar3 = FUN_0057b0e0(0,DAT_0064b4f0,uVar3,0);
              piVar4 = aiStack_a50;
              iVar2 = (**(code **)(iVar1 + 0x14))
                                (unaff_ESI,auStack_624,auStack_41c,auStack_82c,piVar4,&local_a68,
                                 local_a74,uStack_a7c,unaff_EBX,local_a78,local_a70,local_a80,
                                 local_a6c,uVar3);
              if (-1 < iVar2) {
                iVar2 = FUN_0057a640();
                if (-1 < iVar2) {
                  _mbscpy(auStack_978,(uchar *)"Version 3.0 (Build 76)");
                  MultiByteToWideChar(0,1,(LPCSTR)auStack_978,-1,aWStack_25c,0x104);
                  uStack_56 = 0;
                  (**(code **)(*piVar4 + 0x1c))(piVar4,3,0,0x4c,aWStack_25c);
                }
              }
              (**(code **)(*piVar4 + 8))(piVar4);
            }
          }
        }
      }
    }
  }
  return iVar2;
}


