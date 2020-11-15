$placeholder = "Lavender";

sub printIt {
print "$placeholder \n";
}

sub static {
my $placeholder = "Lilac";
printIt();
}

sub dynamic {
local $placeholder = "Lilac";
printIt();
}

print "Static scoping method: ";
static;

print "Dynamic scoping method: ";
dynamic;
