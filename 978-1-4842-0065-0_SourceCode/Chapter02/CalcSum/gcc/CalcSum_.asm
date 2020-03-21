.intel_syntax noprefix

.text

.global CalcSum_
CalcSum_:
  push ebp
  mov ebp,esp

  mov eax,[ebp+8]
  mov ecx,[ebp+12]
  mov edx,[ebp+16]

  add eax,ecx      ; eax = 'a' + 'b'
  add eax,edx      ; eax = 'a' + 'b' + 'c'

  pop ebp
  ret

.global CalcSumAlternative_
CalcSumAlternative_:
  push ebp
  mov ebp,esp

  mov eax,[ebp+8]
  add eax, [ebp + 12]
  add eax, [ebp + 16]

  pop ebp
  ret
